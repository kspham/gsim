//
// Created by snow on 4/9/15.
//

#ifndef GSIM_ALUSIMULATION_H
#define GSIM_ALUSIMULATION_H
#include <string>
#include <algorithm>
#include <iostream>
using namespace std; 
string alu = "GGCTGGGCATGGTGGCTCATGCCTGTAATCCCAGCACTTTGGGAGGCTGA"
        "GGTGGGCGGATCATGAGGTCAGGAGATTGAGACCGTCCTGGCTAACGTGG"
        "TGAAACCCCGTCTTTACTAAAAATACAAAAAATTAGCCAGGCGTGGTGGT"
        "GGGCACCTGTAGTCCCAGCCTCTCAGGAGCCTGAGGCAGGAGAATGGTGT"
        "GAACCCAGGAGGCGGAGCTTGCAGTGAGCTATCACACCACTGCACTCCAG"
        "CCTGGGCGAGAGAGAGACTCCATCTTAAAAAAAAAAAAAAAAAAAAAAAA"
        "A";

string  AddAlu(string original, int position){
    if(position > original.length()){
        cerr<<"invalid position"<<endl;
        exit(1);
    }
    return  original.substr(0,position) +  alu + original.substr(position, original.length());

}
string rc(string& input){
        string rcSq;
        string result= "";
        rcSq= input;

        for (int i=0; i< rcSq.length(); i++)
        {
           if (input[i]== 'A')
                rcSq[i]= 'T';

           if (input[i]== 'T')
                rcSq[i]= 'A';

           if (input[i]== 'C')
                rcSq[i]= 'G';

           if (input[i]== 'G')
                rcSq[i]= 'C';
        }

        for (int i=0; i< rcSq.length(); i++)
        {
                result=rcSq[i] + result;
        }
        return result;
}


void GenerateSimplestSet(string inputgenome, string& reference_genome, string& target_genome){
    size_t first = 1000;
    size_t second = inputgenome.length() - 1000;
    size_t  new_pos = (first + second)/2;
    reference_genome = inputgenome.substr(0,first) + alu +
            inputgenome.substr(first, second - first) + alu +  inputgenome.substr(second,inputgenome.length() -second);
    target_genome = inputgenome.substr(0, first) + alu + inputgenome.substr(first,new_pos -first) + alu
            + inputgenome.substr(new_pos, second - new_pos) + alu + inputgenome.substr(second, inputgenome.length() -second);
    return;
}
void GenerationTest2 (string inputgenome, string& reference_genome, string& target_genome){
    size_t first = 1000;
    size_t second = inputgenome.length()-1000;
    size_t new_pos = (first+second)/2;
    
    reference_genome= inputgenome.substr(0, first) + alu + inputgenome.substr(first,new_pos -first) + alu
            + inputgenome.substr(new_pos, second - new_pos) + alu + inputgenome.substr(second, inputgenome.length() -second);

    target_genome= inputgenome.substr(0,first)+ alu 
                 + inputgenome.substr(first, (new_pos-first)/2) + (alu)
                 + inputgenome.substr(first+(new_pos-first)/2, (new_pos-first)/2)+ alu 
                 + inputgenome.substr(new_pos, (second-new_pos)/2)+ (alu) 
                 + inputgenome.substr(new_pos+(second-new_pos)/2, (second-new_pos)/2)+ (alu) 
                 + inputgenome.substr(second, inputgenome.length()-second);

    return;      	
}

void GenerationTestrc1 (string inputgenome, string& reference_genome, string& target_genome){
    size_t first = 1000;
    size_t second = inputgenome.length() - 1000;
    size_t  new_pos = (first + second)/2;
    reference_genome = inputgenome.substr(0,first) + alu +
            inputgenome.substr(first, second - first) + alu +  inputgenome.substr(second,inputgenome.length() -second);
    target_genome = inputgenome.substr(0, first) + rc(alu) + inputgenome.substr(first,new_pos -first) + alu
            + inputgenome.substr(new_pos, second - new_pos) + rc(alu) + inputgenome.substr(second, inputgenome.length() -second);
    return;
}

void GenerationTestrc2 (string inputgenome, string& reference_genome, string& target_genome){
    size_t first = 1000;
    size_t second = inputgenome.length()-1000;
    size_t new_pos = (first+second)/2;

    reference_genome= inputgenome.substr(0, first) + alu + inputgenome.substr(first,new_pos -first) + alu
            + inputgenome.substr(new_pos, second - new_pos) + alu + inputgenome.substr(second, inputgenome.length() -second);

    target_genome= inputgenome.substr(0,first)+ rc(alu)
                 + inputgenome.substr(first, (new_pos-first)/2) + alu
                 + inputgenome.substr(first+(new_pos-first)/2, (new_pos-first)/2)+ rc(alu)
                 + inputgenome.substr(new_pos, (second-new_pos)/2)+ alu
                 + inputgenome.substr(new_pos+(second-new_pos)/2, (second-new_pos)/2)+ rc(alu)
                 + inputgenome.substr(second, inputgenome.length()-second);

    return;
}

#endif //GSIM_ALUSIMULATION_H
