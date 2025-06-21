#include <chrono>
#include <cstring>
#include <iostream>
#include <format>
#include <stdio.h>

#include "CharDistance.h"

int main(){

    CharDistance CD("outfile.txt");

    auto start1 = std::chrono::high_resolution_clock::now();
    double ret1= CD.strcmp("111111111111111111111111111111","111111111110111111111111111111");
    auto end1 = std::chrono::high_resolution_clock::now();

    auto start2 = std::chrono::high_resolution_clock::now();
    double ret2= std::strcmp("111111111111111111111111111111","111111111110111111111111111111");
    auto end2 = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> elapsed1 = end1 - start1;
    std::chrono::duration<double> elapsed2 = end2 - start2;

    std::cout << "class took " << elapsed1.count() << " seconds\n";
    std::cout << "built-in took " << elapsed1.count() << " seconds\n";

    std::cout<<"class value = "<<ret1<<std::endl;
    std::cout<<"built-in value = "<<ret2<<std::endl;

    return 0;
}