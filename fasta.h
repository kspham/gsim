#ifndef _FASTA_
#define _FASTA_
#include<vector>
#include <fstream>
#include <unistd.h>
#include <glob.h>
#include <iostream>


class FASTARecord{

public:
    FASTARecord(const std::string & header, const std::string & sequence):_header(header), _sequence(sequence) {
    }
    const std::string & GetSequence() const
    {
        return _sequence;
    }
    const std::string & GetHeader() const
    {
        return _header;
    }
private:
    std::string _sequence;
    std::string _header;
};

class FASTAReader{
public:

    explicit FASTAReader(const std::string & filename):
            _inputStream(filename.c_str()), _fileName(filename) {

    }

    virtual ~FASTAReader() {
        _inputStream.close();
    }

    size_t GetSequence(std::vector<FASTARecord>& records);

private:
    std::ifstream _inputStream;
    std::string _fileName;
};

void WriteFasta(const std::string &filename, const std::vector<FASTARecord>& fasta_records);

#endif
