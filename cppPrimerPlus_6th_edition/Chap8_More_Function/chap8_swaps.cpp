//
// Created by Moynstain_MBA on 2022/11/30.
//

#include "iostream"

using std::cin;
using std::cout;
using std::endl;

/// func prototype
void swap_ref(int & a, int & b);
void swap_ptr(int * a, int * b);
void swap_val(int a, int b);

/// main func
int main(){
    int a = 10;
    int b = 20;
    swap_val(a, b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}

/// funcs
void swap_val(int a, int b){
    int temp = b;
    b = a;
    a = temp;
}