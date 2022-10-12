//
// Created by Moynstain_MBA on 2022/3/11.
//
#include "iostream"
#include "string"
using namespace std;

/// & method, applying 1 value to 2 different variables
int swapper(int a, int b){
    int temp = a;
    a = b;
    b = temp;

}

int example_8_2(int val){
    int var1 = 1;
    int &var2 = var1;
    cout << "var1: " << var1 << endl;
    cout << "var2: " << var2 << endl;
    cout << endl;

    int a = 100;
    int b = 50;
    int temp;
    cout << "original a = " << a << ", b = " << b << endl;
    swapper(a, b);


//    temp = a;
//    a = b;
//    b = temp;
    cout << "swapped a = " << a << ", b = " << b << endl;

    return 0;
}

/// test 1 usage of &{variable} *{variable}
double refcube(const double &ra){
    return ra * ra * ra;
}

int test1(int val){
    double side = 3.0;
    double * pd = &side;

}

int main(){
    example_8_2(1);

    return 0;
}
