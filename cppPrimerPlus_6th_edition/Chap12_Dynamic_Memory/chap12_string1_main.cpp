//
// Created by Moynstain_MBA on 2022/12/29.
//
#include "iostream"
#include "chap12_string1.h"

using std::cin;
using std::cout;
using std::endl;

const int ArSize = 10;
const int MaxLen = 81;

int main(){
    String name;
    cout << "Input a name:\n";
    cin >> name;

    cout << name << ", enter up to " << ArSize << " short sentences <empty line to quit>: \n";
    String sentences[ArSize];
    char temp[MaxLen];
    int i;
    for (i = 0; i < ArSize; i++){
        cout << i + 1 << ": ";
        cin.get(temp, MaxLen);
        while (cin && cin.get() != '\n'){
            continue;
        }
        if (!cin || temp[0] == '\0'){
            break;
        } else{
            sentences[i] = temp; /// overloaded assignment
        }
    }
    int total = i;

    if (total > 0){
        cout << "Input sentences are listed below:\n";
        for (i = 0; i < total; i++){
            cout << sentences[i][0] << ": " << sentences[i] << endl;
        }
        int shortest = 0;
        int first = 0;
        for (i = 0; i < total; i++) {
            if (sentences[i].length() < sentences[shortest].length())
                shortest = i;
            if (sentences[i] < sentences[first])
                first = i;
        }
        cout << "Shortest sentence:\n  " << sentences[shortest] << endl;
        cout << "First alphabetically:\n  " << sentences[first] << endl;
        cout << "This program used " << String::HowMany() << " string objects. Done.\n";
    } else{
        cout << "No input. Done.\n";
    }
    return 0;
}