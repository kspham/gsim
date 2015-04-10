#pragma once
#include "fasta.h"
#include <iostream>
#include <glob.h>
#include "fastq.h"
class ReadSimulator{
public:
    ReadSimulator(FASTARecord const &reference) : _reference(reference) {
    }

    void SimulatePairEnd( std::ofstream& outStream1, std::ofstream& outStream2,
            const size_t insertSize, const size_t readLength);

private:
    FASTQRead GenerateRead(size_t position, size_t length, std::string readName);
    FASTQRead GenerateReverseRead(size_t position, size_t length, std::string readName);
    FASTARecord _reference;
    std::string qualityString = "";
};