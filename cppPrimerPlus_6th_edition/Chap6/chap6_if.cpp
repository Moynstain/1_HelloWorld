//
// Created by Moynstain_MBA on 2022/11/25.
//

#include "iostream"
using std::cin;
using std::cout;
using std::endl;

int main(){
    char ch;
    int spaces = 0;
    int total = 0;
    cout << "Enter a sentence: \n";
    cin.get(ch);
    while(ch != '.'){
        if (ch == ' '){
            spaces++;
        }
        total++;
        cin.get(ch);
    }
    cout << spaces << " spaces, " << total << " total chars in a sentence.\n";


    return 0;
}