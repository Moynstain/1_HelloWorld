//
// Created by Moynstain_MBA on 2022/12/15.
//

#ifndef INC_1_HELLOWORLD_CHAP12_STRING_BAD_H
#define INC_1_HELLOWORLD_CHAP12_STRING_BAD_H
#include "iostream"
class StringBad{
private:
    char * str;
    int len;
    static int num_strings;
public:
    StringBad();
    StringBad(const char * s);
    ~StringBad();
    friend std::ostream & operator<<(std::ostream & os, const StringBad & s);
};

#endif //INC_1_HELLOWORLD_CHAP12_STRING_BAD_H
