#include "readsimulator.h"
#include "fastq.h"
#include "stringutils.h"

void ReadSimulator::SimulatePairEnd(  std::ofstream& out1, std::ofstream& out2,
        const size_t insertSize, const size_t readLength) {
    this->qualityString =  std::string(readLength, 'I') ;
    for(int i = 0 ; i < _reference.GetSequence().size() - readLength - insertSize ; ++i)
    {
        std::string firstReadID = "r" + std::to_string(i) + "/1";
        std::string secondReadID = "r" +  std::to_string(i) + "/2";
        FASTQRead read1 = GenerateRead(i, readLength, firstReadID);
        FASTQRead read2 = GenerateReverseRead(i + insertSize - readLength, readLength, secondReadID);

        read1.Write(out1);
        read2.Write(out2);
    }
}

FASTQRead ReadSimulator::GenerateRead(size_t position, size_t length, std::string readName) {
    return FASTQRead(readName, _reference.GetSequence().substr(position, length), qualityString);
}

FASTQRead ReadSimulator::GenerateReverseRead(size_t position, size_t length, std::string readName) {
    return FASTQRead(readName, stringutil::reverse_complement(_reference.GetSequence().substr(position, length)), qualityString);
}