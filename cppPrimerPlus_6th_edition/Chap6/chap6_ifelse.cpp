//
// Created by Moynstain_MBA on 2022/11/25.
//

#include "iostream"
using std::cout;
using std::cin;
using std::endl;

int main(){
    char ch;

    cout << "Type a sentence, and repeat it:\n";
    cin.get(ch);

    while (ch != '.'){
        if (ch == '\n'){
            cout << ch;
        }
        else
            cout << ++ch;
        cin.get(ch);

    }

    return 0;
}