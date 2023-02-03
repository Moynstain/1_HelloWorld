//
// Created by Moynstain_MBA on 2022/12/28.
//

#ifndef INC_1_HELLOWORLD_CHAP12_STRING1_H
#define INC_1_HELLOWORLD_CHAP12_STRING1_H

#include "iostream"
using std::ostream;
using std::istream;

class String{
private:
    char * str;             // ptr to a string
    int len;                // length of a string
    static int num_strings; // number of objects
    static const int CINLIM = 80; // limit of cin input
public:
    /// constructors
    String(const char * s);     // constructor
    String();                   // default constructor
    String(const String & st);   // copy constructor
    ~String();                  // destructor
    int length() const { return len; } // inline func return string length

    /// overloaded operator
    String & operator=(const String & st);
    String & operator=(const char * s);
    char & operator[](int i);
    const char & operator[](int i) const;

    /// overloaded friend funcs
    friend bool operator<(const String & s1, const String & s2);
    friend bool operator>(const String & s1, const String & s2);
    friend bool operator==(const String & s1, const String & s2);
    friend ostream & operator<<(ostream & os, const String & s);
    friend istream & operator>>(istream & is, String & st);

    /// static funcs
    static int HowMany();
};

#endif //INC_1_HELLOWORLD_CHAP12_STRING1_H
