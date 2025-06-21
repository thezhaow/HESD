#include <iostream>
#include <fstream>
#include <sstream>
#include <unordered_map>
#include <string>

class CharDistance
{
private:
    /* data */
    // Note: use default unordered map size
    std::unordered_map<char,std::unordered_map<char,double>> m_char_dist;
    std::string m_printable_chars;
public:
    CharDistance(std::string inputstr);
    ~CharDistance();
    double compare_char(char,char);
};
