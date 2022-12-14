//
// Created by Moynstain_MBA on 2022/12/13.
//

#include "iostream"
#include "chap11_mytime1.h"

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

    total = coding + fixing;
    cout << "coding.Sum(fixing): ";
    total.show();
    cout << endl;

    Time morefixing = {3, 39};
    Time total_now = total.operator+(morefixing);
    cout << "total_now: ";
    total_now.show();
    cout << endl;

    Time double_fixing = total_now.operator*(2);
    cout << "double total_now: ";
    double_fixing.show();
    cout << endl;

    Time triple_fixing = total_now * 3;
    cout << "triple total_now: ";
    triple_fixing.show();
    cout << endl;

    Time quadro_fixing = 4 * total_now;
    cout << "quadro total_now: ";
    quadro_fixing.show();
    cout << endl;

    cout << "\ntest";
    cout << quadro_fixing << "test" << endl;
    cout << "1";

    return 0;
}