//
// Created by Moynstain_MBA on 2022/11/28.
//

#include "iostream"
using std::cin;
using std::endl;
using std::cout;

const int MAX = 5;

int main(){
    double fish[MAX];

    cout << "Enter the weights of the fish:\n";
    cout << "Maximum number of fish is " << MAX << ".\n";
    cout << "<q to terminate>\n";

    /// insert fish weights
    cout << "fish#1: ";
    int i = 0;
    while (i < MAX && cin >> fish[i]){
        if (++i < MAX)
            cout << "fish#" << i+1 << ": ";
    }

    /// calculate total weights
    double total = 0.0;
    for (int j = 0; j < i; j++){
        total += fish[j];
    }

    /// report results
    if (i == 0){
        cout << "No fish weights entered.\n";
    } else{
        cout << "Avg weight = " << total / i << ".\n";
    }


    return 0;
}