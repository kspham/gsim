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
    //GenerateSimplestSet(g10k, reference, target);
    //GenerationTest2(g10k, reference, target);
    //GenerationTestrc1 (g10k, reference, target);
    GenerationTestrc2 (g10k, reference, target);
    cout<< "Sharon test " << reference.length()<<endl;
    //exit(0);
    //FASTARecord fasta_reference("g10k2alu.fa", reference);
    //FASTARecord fasta_target("g10k3alu.fa", target);
    FASTARecord fasta_reference("g10k3alu.fa", reference);
    FASTARecord fasta_target("g10k5alurc.fa", target);

    vector<FASTARecord> refs;
    refs.push_back(fasta_reference);
    vector<FASTARecord> tar;
    tar.push_back(fasta_target);
    //WriteFasta("../data/g10k2alu_ref.fa",refs);
    //WriteFasta("../data/g10k3alu_ta.fa", tar);
    WriteFasta("../data/g10k3alu_ref.fa",refs);
    WriteFasta("../data/g10k5alurc_ta.fa", tar);

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
