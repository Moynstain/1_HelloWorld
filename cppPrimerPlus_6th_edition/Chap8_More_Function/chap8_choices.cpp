//
// Created by Moynstain_MBA on 2022/12/5.
//

#include "iostream"

using std::cin;
using std::cout;
using std::endl;

/// funcs
template<typename T>
T lesser(T a, T b){
    return a < b ? a : b;
}

int lesser (int a, int b){
    a = a < 0 ? -a : a;
    b = b < 0 ? -b : b;
    return a < b ? a : b;
}

template<class T1, class T2>
auto gt(T1 x, T2 y) -> decltype(x + y){
    return x + y;
}

/// main func
int main(){
    int m = 20;
    int n = -30;
    double x = 15.5;
    double y = 25.9;

    cout << lesser(m, n) << endl;
    cout << lesser(x, y) << endl;
    cout << lesser<>(m, n) << endl;
    cout << lesser<int>(x, y) << endl;
    return 0;
}