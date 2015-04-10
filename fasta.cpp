#include "fasta.h"
#include <iostream>
size_t FASTAReader::GetSequence(std::vector<FASTARecord> &records) {
    std::string buffer;
    std::string sequence;
    std::string header;
    while(_inputStream.good()){
        std::getline(_inputStream, buffer);
        if (buffer.empty())
            continue;
        if (buffer[0] == '>') {
            if (!header.empty()){
                records.push_back(FASTARecord(sequence,header));
                sequence.clear();
                header.clear();
            }
            header = buffer;

        }else
        {
            sequence += buffer;
        }
    }
    records.push_back(FASTARecord(header,sequence));
    return records.size();
}

void WriteFasta(const std::string &filename, const std::vector<FASTARecord> &fasta_records) {
    {
        std::ofstream outfile(filename);
        if(!outfile.is_open()){ std::cerr<<"Error opening "<<filename<<std::endl; exit(1);}
        std::vector<FASTARecord>::const_iterator iter;
        for(iter = fasta_records.begin(); iter!= fasta_records.end(); ++iter){
            std::string const header = iter->GetHeader();
            std::string sequence = iter->GetSequence();
            outfile << ">" << header << std::endl;
            size_t cursor = 0;
            while (cursor < sequence.length()){
                outfile<<sequence.substr(cursor,60)<<std::endl;
                cursor+= 60;
            }
        }
        outfile.close();
    }

}
