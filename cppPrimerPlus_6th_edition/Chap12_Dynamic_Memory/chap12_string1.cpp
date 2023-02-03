//
// Created by Moynstain_MBA on 2022/12/28.
//
#include "iostream"
#include "chap12_string1.h"
#include "cstring"

using std::cin;
using std::cout;

int String::num_strings = 0;

/// static funcs
int String::HowMany() {
    return num_strings;
}

/// class methods
String::String(const char * s) {
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    num_strings++;
}

String::String() {
    len = 4;
    str = new char[1];
    str[0] = '\0';
    num_strings++;
}

String::String(const String & st) {
    num_strings++;
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);
}

String::~String() {
    --num_strings;
    delete [] str;
}

/// overloaded operator
    // assign a string to a string
String & String::operator=(const String & st) {
    if (this == & st){
        return * this;
    }
    delete [] str;
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);
    return * this;
}
    // assign a c-string to a string
String & String::operator=(const char *s) {
    delete [] str;
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    return * this;
}

    // read-write char access for non-const string
char & String::operator[](int i) {
    return str[i];
}

const char & String::operator[](int i) const {
    return str[i];
}

/// overloaded operator friends
bool operator<(const String & s1, const String & s2) {
    return (std::strcmp(s1.str, s2.str) < 0);
}

bool operator>(const String & s1, const String & s2) {
    return s2 < s1;
}

bool operator==(const String & s1, const String & s2) {
    return (std::strcmp(s1.str, s2.str) == 0);
}

    // string output
ostream & operator<<(ostream & os, const String & s) {
    os << s.str;
    return os;
}

istream & operator>>(istream & is, String & st) {
    char temp[String::CINLIM];
    is.get(temp, String::CINLIM);
    if (is){
        st = temp;
    }
    while (is && is.get() != '\n'){
        continue;
    }
    return is;
}