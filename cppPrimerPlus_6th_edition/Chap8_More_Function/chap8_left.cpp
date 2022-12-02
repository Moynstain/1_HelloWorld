//
// Created by Moynstain_MBA on 2022/12/1.
//

#include "iostream"

using std::cin;
using std::cout;
using std::endl;

const int ArSize = 80;

/// func prototype
char * left(const char * str, int n = 1);

/// main func
int main(){
    char sample[ArSize];
    cout << "Enter a string: \n";
    cin.get(sample, ArSize);
    char *ps = left(sample, 4);
    cout << ps << endl;
    delete [] ps;

    ps = left(sample); /// 1 argument provided, int n = default 1.
    cout << ps << endl;
    delete [] ps;
    return 0;
}

/// funcs
char * left(const char * str, int n){
    if (n < 0){
        n = 0;
    }
    char * p = new char[n+1];
    int i;
    for (i = 0; i < n && str[i]; i++){
        p[i] = str[i];
    }
    while (i <= n){
        p[i++] = '\0';
    }
    return p;
}