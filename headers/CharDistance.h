#ifndef CHAR_DISTANCE_H
#define CHAR_DISTANCE_H

#include <fstream>
#include <sstream>
#include <string>
#include <unordered_map>

class CharDistance{
private:
    // Note: use default unordered map size
    std::unordered_map<char,std::unordered_map<char,double>> m_char_dist;
    std::string m_printable_chars;
public:
    CharDistance(std::string);
    ~CharDistance();
    double charcmp(const char,const char);
    double strcmp(const char*, const char*);
};

#endif // CHAR_DISTANCE_H