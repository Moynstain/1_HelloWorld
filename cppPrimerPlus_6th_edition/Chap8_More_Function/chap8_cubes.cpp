//
// Created by Moynstain_MBA on 2022/12/1.
//

#include "iostream"

using std::cin;
using std::cout;
using std::endl;

/// func prototype
double cube(double a);
double refcube(double &a);

/// main func
int main(){
    double x = 3.0;
    cout << "cube x = " << cube(x)  << " with x = " << x << endl;
    cout << "refcube x = " << refcube(x) << " with x = " << x << endl;

    return 0;
}

/// funcs
double cube(double a){
    a *= a * a;
    return a;
};

double refcube(double &ra){
    ra = ra * ra * ra;
    return ra;
};
