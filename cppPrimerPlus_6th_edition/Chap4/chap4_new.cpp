//
// Created by Moynstain_MBA on 2022/10/14.
//

#include "iostream"

int main(){
    using namespace std;

    int nights = 1001;
    int *pt = new int;
    *pt = 1001;

    cout << "nights: " << nights << endl;
    cout << "&nights: " << &nights << endl;
    cout << "*pt: " << *pt << endl;
    cout << "pt: " << pt << endl;

    delete pt;

    auto *p3 = new double [3];
    p3[0] = 1.0;
    p3[1] = 2.0;
    p3[2] = 3.0;

    cout << "p3[0] = " << p3[0] << endl;
    p3 = p3 + 1;
    cout << "Now += p3[0] = " << p3[0] << endl;
    p3 += 1;
    cout << "Now -= p3[0] = " << p3[0] << endl;

    auto *p = p3;
    cout << p << endl << *p << endl;




    cout << "------" << endl;

    double wages[3] = {100.0, 200.0, 300.0};
    short stacks[3] = {3, 2, 1};

    double* pw;
    pw = wages;
    short* ps = &stacks[0];
    double* pww = wages;
    short* pss = &stacks[0];


    cout << "pw = " << pw << endl;
    cout << "*pw = " << *pw << endl;
    cout << "ps = " << ps << endl;
    cout << "*ps = " << *ps << endl;

    cout << "pww = " << pww << endl;
    cout << "&pww = " << &pww << endl;
    cout << "pss = " << pss << endl;
    cout << "&pss = " << &pss << endl;


    int a = 1000;
    int* ptr_a = &a;
    cout<<endl;
    cout << ptr_a << endl;
    cout << *ptr_a << endl;
    *ptr_a = 1001;
    a = 1002;
    cout << endl;
    cout << ptr_a << endl;
    cout << *ptr_a << endl;
    cout << &ptr_a << endl;
    cout << a << endl;

    return 0;
}