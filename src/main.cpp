#include "CharDistance.h"

int main(){

    CharDistance CD("outfile.txt");
    std::cout<<"1|0 = "<<CD.strcmp("11","01")<<std::endl;
    std::cout<<"0|1 = "<<CD.strcmp("00","11")<<std::endl;

    return 0;
}