//
// Created by Moynstain_MBA on 2022/11/30.
//

#include "iostream"

using std::cin;
using std::cout;
using std::endl;

int main(){
    int rats = 101;
    int & rodents = rats;

    cout << "rats = " << rats << endl;
    cout << "rodents = " << rodents << endl;

    cout << "&rats = " << &rats << endl;
    cout << "&rodents = " << &rodents << endl;

    int bunnies = 50;
    rodents = bunnies;
    cout << "bunnies = " << bunnies << endl;
    cout << "rodents = " << rodents << endl;
    cout << "rats = " << rats << endl;

    cout << &bunnies << endl;
    cout << &rodents << endl;
    cout << &rats << endl;



    return 0;
}