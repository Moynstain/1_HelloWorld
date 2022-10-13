//
// Created by Moynstain_MBA on 2022/10/13.
//

#include "iostream"
using namespace std;

int main(){
    cout << "\007Operation \"HyperHype\" is now activated\n";
    cout << "Enter your agent code:__________\b\b\b\b\b\b\b";
    long code;
    cin >> code;
    cout << "\aYou entered " << code << "...\n";
    cout << "Verified.\n";


    return 0;
}