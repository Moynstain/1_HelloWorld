//
// Created by Moynstain_MBA on 2022/10/14.
//

#include "iostream"

int main(){
    using namespace std;

    int updates = 6;
    int *p_updates;
    p_updates = &updates;

    cout << "int updates: " << updates << endl;
    cout << "int *p_updates: " << *p_updates << endl;
    cout << "p_updates: " << p_updates << endl;
    cout << "&updates: " << &updates << endl;
    cout << "&p_updates: " << &p_updates << endl;

    return 0;
}