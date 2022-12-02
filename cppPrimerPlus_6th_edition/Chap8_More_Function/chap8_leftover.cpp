//
// Created by Moynstain_MBA on 2022/12/1.
//

#include "iostream"

using std::cin, std::cout, std::endl;

/// func prototype
unsigned long left(unsigned long num, unsigned ct);
char * left(const char * str, int n = 1);

int main(){

}

/// funcs
unsigned long left(unsigned long num, unsigned ct){
    unsigned digits = 1;
    unsigned long n = num;

    if (ct == 0 || num == 0){
        return 0;
    }
    while (digits > ct){
        digits ++;
    }
    if (digits > ct){
        ct = digits - ct;
        while (ct--){
            num /= 10;
        }
        return num;
    }
}

char * left(const char * str, int n);