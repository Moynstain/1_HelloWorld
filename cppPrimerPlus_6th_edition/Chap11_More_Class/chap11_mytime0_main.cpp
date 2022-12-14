//
// Created by Moynstain_MBA on 2022/12/13.
//

#include "iostream"
#include "chap11_mytime0.h"

using std::cout;
using std::endl;

int main(){
    Time planning;
    Time coding(2, 40);
    Time fixing(5, 56);
    Time total;

    cout << "planning time: ";
    planning.show();
    cout << endl;

    cout << "coding time: ";
    coding.show();
    cout << endl;

    cout << "fixing time: ";
    fixing.show();
    cout << endl;

    total = coding.Sum(fixing);
    cout << "coding.Sum(fixing): ";
    total.show();
    cout << endl;


    return 0;
}