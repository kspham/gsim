//
// Created by snow on 4/9/15.
//

#ifndef GSIM_ALUSIMULATION_H
#define GSIM_ALUSIMULATION_H
#include <string>
#include <algorithm>
std::string alu = "GGCTGGGCATGGTGGCTCATGCCTGTAATCCCAGCACTTTGGGAGGCTGA"
        "GGTGGGCGGATCATGAGGTCAGGAGATTGAGACCGTCCTGGCTAACGTGG"
        "TGAAACCCCGTCTTTACTAAAAATACAAAAAATTAGCCAGGCGTGGTGGT"
        "GGGCACCTGTAGTCCCAGCCTCTCAGGAGCCTGAGGCAGGAGAATGGTGT"
        "GAACCCAGGAGGCGGAGCTTGCAGTGAGCTATCACACCACTGCACTCCAG"
        "CCTGGGCGAGAGAGAGACTCCATCTTAAAAAAAAAAAAAAAAAAAAAAAA"
        "A";

std::string  AddAlu(std::string original, int position){
    if(position > original.length()){
        std::cerr<<"invalid position"<<std::endl;
        exit(1);
    }
    return  original.substr(0,position) +  alu + original.substr(position, original.length());

}
void GenerateSimplestSet(std::string inputgenome, std::string& reference_genome, std::string& target_genome){
    size_t first = 1000;
    size_t second = inputgenome.length() - 1000;
    size_t  new_pos = (first + second)/2;
    reference_genome = inputgenome.substr(0,first) + alu +
            inputgenome.substr(first, second - first) + alu +  inputgenome.substr(second,inputgenome.length() -second);
    target_genome = inputgenome.substr(0, first) + alu + inputgenome.substr(first,new_pos -first) + alu
            + inputgenome.substr(new_pos, second - new_pos) + alu + inputgenome.substr(second, inputgenome.length() -second);
    return;
}
#endif //GSIM_ALUSIMULATION_H
