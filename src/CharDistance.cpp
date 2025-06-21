#include "CharDistance.h"

CharDistance::CharDistance(std::string inputstr)
{
    std::ifstream file(inputstr);
    std::string line;
    std::getline(file, m_printable_chars);
    // loop through file lines to store
    int i=0;
    while (std::getline(file, line)) {
        if(m_char_dist.find(m_printable_chars[i]) == m_char_dist.end()){
            m_char_dist[m_printable_chars[i]] = std::unordered_map<char,double>();
        }
        std::istringstream iss(line);
        double value;
        int j=0;
        while (iss >> value) {
            m_char_dist[m_printable_chars[i]][m_printable_chars[j]] = value;
            j++;
        }
        i++;
    }
}

CharDistance::~CharDistance()
{
    for(auto x: m_char_dist) x.second.clear();
    m_char_dist.clear();
}


double CharDistance::compare_char(char c1,char c2){
    return m_char_dist[c1][c2];
}