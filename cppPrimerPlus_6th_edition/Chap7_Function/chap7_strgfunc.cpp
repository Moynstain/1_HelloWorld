//
// Created by Moynstain_MBA on 2022/11/29.
//
#include "iostream"
#include "cstring"
using std::cin;
using std::cout;
using std::endl;

/// function prototype
unsigned int c_in_str(const char * str, char ch);

int main(){
    char mmm[15] = "minimum";
    char * wail = "ululate";
    unsigned int ms = c_in_str(mmm, 'm');
    unsigned int ws = c_in_str(wail, 'u');
    cout << ms << " letter m in mmm[].\n";
    cout << ws << " letter u in *wail.\n";

    return 0;
}

unsigned int c_in_str(const char * str, char ch){
    unsigned int count = 0;
    while (* str){
        if (*str == ch){
            count++;
        }
        str++;
    }
    return count;
};