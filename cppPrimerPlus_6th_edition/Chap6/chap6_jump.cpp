//
// Created by Moynstain_MBA on 2022/11/28.
//
#include "iostream"
#include "cstring"

using std::cin;
using std::cout;
using std::endl;

const int ArSize = 80;

int main(){
    char line[ArSize];
    int spaces = 0;

    cout << "Enter a sentence with spaces:\n";
    cin.get(line, ArSize);
    cout << "Input sentence detected.\n";
    cout << "Line through first period:\n";

    for (int i = 0; line[i] != '\0'; i++){
        cout << line[i];
        if (line[i] == '.')
            break;
        if (line[i] != ' ')
            continue;
        spaces++;
    }
    cout << "\n" << spaces << " spaces in the sentence.\n";

    return 0;
}
