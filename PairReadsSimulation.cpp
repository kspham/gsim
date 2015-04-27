
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include "stringutils.h"
#include <unistd.h>
#include "fasta.h"
#include "fasta.cpp"
#include "fastq.h"
#include "readsimulator.h"
#include "AluSimulation.h"
using namespace std;


void GenPair(string inputGenome, string& pair)
{
 // function is only responsible of making 100bp reads
  int pos=0;
//  int end=99; 
  int pairL=100;
  while(pos<inputGenome.length()-99)
  {
    pair= inputGenome.substr(pos, pairL);
    cout<<pair<< endl;
    cout<< pair.length()<<endl;
    pos++;

  }
  return; 
}
int main ()
{
    FASTAReader myReader("../data/g10k.fasta");
    vector<FASTARecord> myGenome;
    myReader.GetSequence(myGenome);
    string g10k = myGenome[0].GetSequence();
    string pair;
    GenPair(g10k, pair);

    FASTARecord fasta_pair("g10k_pair.fa", pair);
    vector<FASTARecord> readPair;
    readPair.push_back(fasta_pair);
    WriteFasta("../data/g10k_pair.fa", readPair);
	// a string that reads from pos~end, with length 100
//	string pair= inputGenome.substr(pos,pairL);
//	cout<< "pair with 100 bp reads"<< pair << endl;
//	cout<< "pair length"<< pair.length()<< endl;
	//push this string into a string array to store
//	PairReads.push_back(pair);
//	WriteFasta("../data/pairReads_test.fa", PairReads)	
	
//}

//return PairReads;


}



