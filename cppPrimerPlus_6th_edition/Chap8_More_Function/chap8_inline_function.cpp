//
// Created by Moynstain_MBA on 2022/11/30.
//

#include "iostream"

using std::cin, std::cout, std::endl;

/// func prototype
// inline function
inline double square(double x) { return x * x; };

/// main func
int main(){
    double a, b;
    double c = 14;
    a = square(5);
    b = square(3.4 + 4.6);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    cout << "c squared = " << square(c++) << endl;
    cout << "now c = " << c << endl;
    cout << "now c squared = " << square(++c) << endl;
    return 0;
}