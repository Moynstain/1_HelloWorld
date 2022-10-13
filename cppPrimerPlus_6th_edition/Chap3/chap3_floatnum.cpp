//
// Created by Moynstain_MBA on 2022/10/13.
//

#include "iostream"
using namespace std;

int main(){
    cout.setf(ios_base::fixed, ios_base::floatfield); /// display fixed point
    float tub = 10.0 / 3.0; /// about 6 places
    double mint = 10.0 / 3.0; /// about 15 places
    const float million = 1.0e6;

    cout << "tub = " << tub << endl;
    cout << "mint = " << mint << endl;
    cout << "a million tubs = \t" << million * tub << endl;
    cout << "10 million tubs = \t" << 10 * million * tub << endl;
    cout << "100 million tubs = \t" << 100 * million * tub << endl;
    cout << "1000 millio tubs = \t" << 1000 * million * tub << endl;

    cout << "a million mints = " << million * mint << endl;
    cout << "10 million mints = " << 10 * million * mint << endl;

    const int code = 66;
    char c1 {code};

    return 0;
}