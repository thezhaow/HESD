#include "CharDistance.h"

CharDistance::CharDistance(std::string inputstr){
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

CharDistance::~CharDistance(){
    for(auto x: m_char_dist) x.second.clear();
    m_char_dist.clear();
}

double CharDistance::charcmp(const char c1,const char c2){
    return m_char_dist[c1][c2];
}

double CharDistance::strcmp(const char* s1, const char* s2){
    double return_value = 0;
    while (*s1 && *s2){
        return_value+=charcmp(*s1,*s2);
        s1++;
        s2++;
    }
    while(*s1){
        return_value-=1.0;
        s1++;
    }
    while(*s2){
        return_value-=1.0;
        s2++;
    }
    return return_value;
}
