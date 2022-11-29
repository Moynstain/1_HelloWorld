//
// Created by Moynstain_MBA on 2022/11/30.
//

#include "iostream"

using std::cin;
using std::cout;
using std::endl;

/// function prototype
void countdown(int n);

/// main func
int main(){
    countdown(5);
    return 0;
}

/// functions
void countdown(int n){
    cout << "counting down ... " << n << endl;
    cout << "n at " << &n << endl;
    if (n > 0){
        countdown(n-1);
    }
    cout << n << ": BOOM!!!\n";
    cout << "... n at " << &n << endl;
};