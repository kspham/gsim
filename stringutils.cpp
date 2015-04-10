//
// Created by snow on 4/10/15.
//
#include<string>
#include<map>
namespace stringutil {
    std::string reverse_complement(const std::string &seq) {
        std::map<char, char> mcomplement = {{'A', 'T'},
                                            {'T', 'A'},
                                            {'C', 'G'},
                                            {'G', 'C'},
                                            {'a', 't'},
                                            {'t', 'a'},
                                            {'c', 'g'},
                                            {'g', 'c'}};
        std::string out(seq.length(), 'A');
        size_t last_pos = seq.length() - 1;
        for (int i = last_pos; i >= 0; --i) {
            out[last_pos - i] = mcomplement[seq[i]];
        }
        return out;

    }
}