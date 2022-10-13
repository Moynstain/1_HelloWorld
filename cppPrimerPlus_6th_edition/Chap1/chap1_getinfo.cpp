//
// Created by Moynstain_MBA on 2022/10/13.
//

#include "iostream"

using namespace std;

int main(){
    int carrots;

    cout << "How many carrots do you have?" << endl;
    cin >> carrots;
    cout << "You have " << carrots << " carrots.\nAnd here are 4 more for you.\n";
    carrots += 4;
    cout << "Now you have " << carrots << " carrots.\n";

    return 0;
}
