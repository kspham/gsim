#pragma  once
#include <ostream>
class FASTQRead{
public:
    FASTQRead (const std::string & readID, const std::string & sequence, const std::string & quality):
            _id(readID), _sequence(sequence), _quality(quality){}
    void Write( std::ofstream& os);
    std::string  get_seq(){
        return _sequence;
    }
    std::string get_quality(){
        return _quality;
    }
private:
    std::string  _id;
    std::string  _sequence;
    std::string _quality;
};
