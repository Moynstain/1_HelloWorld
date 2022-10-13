//
// Created by Moynstain_MBA on 2022/10/13.
//

#include "iostream"
using namespace std;

int main(){
    int chest = 32;
    int waist = 0x42;
    int inseam = 042;

    cout << "chest = 42: " << chest << endl;
    cout << "waist = 0x42: " << waist << endl;
    cout << "inseam = 042: " << inseam << endl;

    waist += 100;
    cout << waist << endl;
    cout << hex; /// change std::cout display format into hex
    cout << waist << endl;
    cout << oct; /// change std::cout display format into oct
    cout << waist << endl;
    return 0;
}
