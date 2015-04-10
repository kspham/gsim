#include <iostream>
#include "fasta.h"
#include "fastq.h"
#include "readsimulator.h"
#include "AluSimulation.h"
#include "stringutils.h"
#include <unistd.h>

using namespace std;

int main() {
    FASTAReader myReader("../data/g10k.fasta");
    std::vector<FASTARecord> myGenome;
    myReader.GetSequence(myGenome);
    std::string g10k = myGenome[0].GetSequence();
    string reference, target;
    GenerateSimplestSet(g10k, reference, target);

    //exit(0);
    FASTARecord fasta_reference("g10k2alu.fa", reference);
    FASTARecord fasta_target("g10k3alu.fa", target);
    vector<FASTARecord> a;
    a.push_back(fasta_reference);
    vector<FASTARecord> b;
    b.push_back(fasta_target);
    WriteFasta("../data/g10k2alu_ref.fa",a);
    WriteFasta("../data/g10k3alu_ta.fa", b);

    ReadSimulator readSimulator(fasta_target);
    std::ofstream fp1, fp2;
    fp1.open("../data/g10k_1.fastq", ios::out);
    fp2.open("../data/g10k_2.fastq", ios::out);
    if(!fp1.is_open() or !fp2.is_open() ){
        cout<<"Wrong";
        exit(1);
    }
    size_t insertSize = 250;
    size_t readLength = 100;
    readSimulator.SimulatePairEnd(fp1, fp2, insertSize, readLength);
    cout<<"OK"<<endl;
}
