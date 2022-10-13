//
// Created by Moynstain_MBA on 2022/10/13.
//
#include "iostream"
using namespace std;

void simon(int); /// Define the prototype of the function

int main(){
    simon(3);
    cout << "Pick an integer: \n";
    int count;
    cin >> count;
    simon(count);
    cout << "Finished.\n";



    return 0;
}

void simon(int n){
    cout << "Simon says jump " << n << " times!\n";
}