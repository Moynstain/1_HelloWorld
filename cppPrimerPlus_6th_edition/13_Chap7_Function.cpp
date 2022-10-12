//
// Created by Moynstain_MBA on 2022/3/7.
//
#include "iostream"
#include "string"
using namespace std;

// example 7.4 lotto.cpp 2022/3/7
long double probability(unsigned numbers, unsigned picks){
    long double result = 1.0;
    long double n;
    unsigned p;

    for (n = numbers, p = picks; p > 0; n--, p--){
        result = result * n / p;
    }
    return result;
}
int lotto(){
    int numbers, picks;
    char ch;
    do {
        cout << "Enter a total number of cards: \n";
        cin >> numbers;
        cout << "Enter a number of picks: \n";
        cin >> picks;
        cout << "By calculating, your winning chances is:\n 1 / " << probability(numbers, picks) << endl;
        cout << "Press 'y' to continue calculating, or 'q' to quit: \n";
        cin >> ch;
        cin.get();
    }while(ch != 'q');
    return 0;
}


//
int main(){
    lotto(); // example 7.4 passed 2022/3/7


    return 0;
}
