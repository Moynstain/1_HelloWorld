//
// Created by Moynstain_MBA on 2022/11/25.
//

#include "iostream"
#include "climits"          // compare the value vs the limit

#include "cctype"


using std::cin;
using std::cout;
using std::endl;
bool is_int(long);

int main(){
    double num;

    cout << "Enter an integer value:\n";
    cin >> num;
    while (!is_int(num)){
        cout << "[Warning] Out of range!\nPlease try again:\n";
        cin >> num;
    }
    int val = int (num);
    cout << "You've entered an integer: " << val << endl;

    return 0;
}

bool is_int(long x){
    if (x <= INT_MAX && x >= INT_MIN){
        return true;
    }
    else {
        return false;
    }
}