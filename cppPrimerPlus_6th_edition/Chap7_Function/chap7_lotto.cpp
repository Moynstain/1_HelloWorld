//
// Created by Moynstain_MBA on 2022/11/28.
//
#include "iostream"

using std::cin;
using std::cout;
using std::endl;

long double probability(unsigned numbers, unsigned picks);

int main(){
    double total, choices;
    cout << "Enter the numbers of total cards and the number of your picks: \n";
    while ((cin >> total >> choices) && (choices <= total)){
        cout << "winning chance: ";
        cout << "1 / " << probability(total, choices) << endl;
    }
    cout << "test !cin with int: ";
    int test;
    cin >> test;
    cout << bool(cin) << ", " << bool(!cin);

    return 0;
}

long double probability(unsigned numbers, unsigned picks){
    long double results = 1.0;
    long double n;
    unsigned p;
    for (n = numbers, p = picks; p > 0; n--, p--){
        results = results * n / p;
    }
    return results;
};