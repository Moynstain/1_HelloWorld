//
// Created by Moynstain_MBA on 2022/12/1.
//

#include "iostream"
#include "string"

using std::cin;
using std::cout;
using std::endl;

/// func prototype
std::string version1(const std::string & s1, const std::string & s2);
const std::string & version2(std::string & s1, const std::string & s2);
const std::string & version3(std::string & s1, const std::string & s2);

/// main func
int main(){

    return 0;
}

/// funcs
std::string version1(const std::string & s1, const std::string & s2){
    std::string temp;
    temp = s2 + s1 + s2;
    return temp;
}

const std::string & version2(std::string & s1, const std::string & s2){
    s1 = s2 + s1 + s2;
    return s1;
}

// bad design for the local variable
const std::string & version3(std::string & s1, const std::string & s2){
    std::string temp;
    temp = s2 + s1 + s2;
    return temp;
}