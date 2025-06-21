#include "CharDistance.h"

int main(){

    CharDistance CD("outfile.txt");
    std::cout<<"1|0 = "<<CD.compare_char('1','0')<<std::endl;
    std::cout<<"0|1 = "<<CD.compare_char('0','1')<<std::endl;

    return 0;
}