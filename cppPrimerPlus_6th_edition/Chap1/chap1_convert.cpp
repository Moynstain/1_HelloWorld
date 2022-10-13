//
// Created by Moynstain_MBA on 2022/10/13.
//

#include "iostream"

using namespace std;

/// function prototype
int stonetolb(int);

/// main function
int main(){
    int stone;
    cout << "Enter the weight in stone: \n";
    cin >> stone;
    int pounds = stonetolb(stone);
    cout << stone << " stone = " << pounds << " pounds \n";


    return 0;
}

int stonetolb(int stone){
    return 14 * stone;
}