//
// Created by Moynstain_MBA on 2022/12/22.
//
#include "iostream"
#include "chap12_string_bad.h"

using std::cin;
using std::cout;
using std::endl;

void callme1(StringBad &); /// pass by ref
void callme2(StringBad); /// pass by value

int main(){
    cout << "Starting an inner block:\n";
    StringBad headline1("HeadLine 1 content");
    StringBad headline2("Headline 2 content is here");
    StringBad sports("Messi World Cup Champion!");
    cout << "headline1: " << headline1 << endl;
    cout << "headline2: " << headline2 << endl;
    cout << "sports: " << sports << endl << endl;

    callme1(headline1);
    cout << "headline1 callme1: " << headline1 << endl;
    callme2(headline2);
    cout << "headline2 callme2: " << headline2 << endl;

    cout << "\nInitializing another object\n";
    StringBad sailor = sports;
    cout << "sailor: " << sailor << endl;
    cout << "Assigning obj to another: \n";
    StringBad knot;
    knot = headline1;
    cout << "knot: " << knot << endl;
    cout << "\nDone\n";



    return 0;
}

/// funcs
void callme1(StringBad & rsb){
    cout << "String passed by reference:\n";
    cout << "     \"" << rsb << "\" \n";
}

void callme2(StringBad sb){
    cout << "String passed by value:\n";
    cout << "     \"" << sb << "\" \n";
}