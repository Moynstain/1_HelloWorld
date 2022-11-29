//
// Created by Moynstain_MBA on 2022/11/30.
//

#include "iostream"

using std::cin;
using std::cout;
using std::endl;

/// func prototype
const double * f1(const double arr[], int n);
const double * f2(const double [], int);
const double * f3(const double *, int);
typedef const double *(*func_ptr)(const double [], int);

/// main func
int main(){
    double av[3] = {1111.1, 2222.2, 3333.3};

    /// pointer to a function
    const double *(*p1)(const double *, int) = f1;
    auto p2 = f2;

    cout << "Using ptr to functions: \n";
    cout << " Address  Value\n";
    cout << (*p1)(av, 3) << ": " << *(p1)(av, 3) << endl;
    cout << p2(av, 3) << ": " << * p2(av, 3) << endl;

    const double *(*pa[3])(const double *, int) = {f1, f2, f3};
    auto pb = pa;
    cout << "\nUsing an array of ptrs to functions: \n";
    cout << " Address  Value\n";
    for (int i = 0; i < 3; i++){
        cout << pa[i](av, 3) << ": " << *pa[i](av, 3) << endl;
    }

    cout << "\nUsing a ptr to a ptr to a function: \n";
    cout << " Address  Value\n";
    for (int i = 0; i < 3; i++){
        cout << pb[i](av, 3) << ": " << *pb[i](av, 3) << endl;
    }
    func_ptr pc[3] = {f1, f2, f3};

    return 0;
}

/// funcs
const double * f1(const double * arr, int n){
    return arr;
};

const double * f2(const double arr[], int n){
    return arr + 1;
};

const double * f3(const double arr[], int n){
    return arr + 2;
};