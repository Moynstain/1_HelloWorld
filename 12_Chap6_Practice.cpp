//
// Created by Moynstain_MBA on 2022/3/4.
//
#include "iostream"
using namespace std;


// practice 1 2022/3/4
int practice1(int val){
    cout << "insert something randomly: \n";
    char input;
    char output;

    cin.get(input);
    while (input != '@'){
        if (isalpha(input)){
            if (isupper(input)){
                output = tolower(input);
                cout << output;
            } else{
                output = toupper(input);
                cout << output;
            }
        }
        cin.get(input);
        if (input == '\n'){
            cout << endl;
        }
    }

    cout << "--- practice 1 passed ---\n";
    return 0;
}

// practice 2 2022/3/4



int main(){
    practice1(1);

    return 0;
}
