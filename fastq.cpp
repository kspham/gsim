#include "fastq.h"
#include <fstream>
#include <iosfwd>
void FASTQRead::Write(std::ofstream& os)   {
    os << "@" << _id <<std::endl;
    os << _sequence<< std::endl;
    os << "+" <<std::endl;
    os << _quality << std::endl;

}
