//
// Created by Moynstain_MBA on 2022/10/13.
//

#include "iostream"
using namespace std;

void morechar();

int main(){
    char ch;

    cout << "enter a character: \n";
    cin >> ch;
    cout << "you entered: " << ch << endl;

    morechar();

    cout << "Using func cout.put(char)\n";
    cout.put(ch);
    cout.put(ch+=1);

    cout << endl;
    cout << 'M';
    return 0;
}

void morechar(){
    char ch = 'M';
    int i = ch;
    cout << "ASCII code for ch is: " << ch << endl;
    cout << "number for ch is: " << i << endl;
    ch += 1;
    i = ch;
    cout << "Now ASCII code for ch is: " << ch << endl;
    cout << "Now number for ch is: " << i << endl;


}