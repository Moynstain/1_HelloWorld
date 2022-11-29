//
// Created by Moynstain_MBA on 2022/11/29.
//
#include "iostream"
using std::cin;
using std::cout;
using std::endl;

/// function prototype
char * buildstr(char c, int n);

int main(){
    int times;
    char ch;

    cout << "Enter a character: \n";
    cin >> ch;
    cout << "Enter an integer: \n";
    cin >> times;
    char *ps = buildstr(ch, times);
    cout << ps << endl;
    delete [] ps;
    ps = buildstr('+', (times - 6) / 2);
    cout << ps << "-Done-" << ps << endl;
    delete [] ps;
    return 0;
}

char * buildstr(char c, int n){
    char * pstr = new char[n + 1];
    pstr[n] = '\0';  /// terminate string
    while (n-- > 0){
        pstr[n] = c;
    }
    return pstr;
};
