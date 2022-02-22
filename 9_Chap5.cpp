//
// Created by Moynstain_MBA on 2022/2/22.
//
#include "iostream"

using namespace std;

// for loop 2022/2/22
int for_loop(int val){
    for (int i = 0; i <= 5; i++){
        cout << "C++ knows how many loops have been run, loop no." << i << endl;
    }
    cout << "for loop ends!\n";

    // following for loop countdown function
    cout << "Insert the countdown limit value: \n";
    int limit_val = 5;
    // cin >> limit_val;
    int i;
    for (i = limit_val; i;  i--){
        cout << "--- i = " << i << " ---\n";
    }
    cout << "now the countdown is over where i = " << i << endl;
    cout << (i = 100) << endl;
    cout << (i > 3) << endl;
    cout.setf(ios_base::boolalpha);
    cout << (i > 3) << endl;
    int value_length = 10;
    long long calculate_value[value_length];
    calculate_value[1] = calculate_value[0] = 1;
    for (int i = 1; i < value_length; i++){
        calculate_value[i] = calculate_value[i-1] * i;
    }
    for (int i = 0; i < value_length; i++){
        cout << i << "! = " << calculate_value[i] << endl;
    }

    // following modify the step value in for loop
    cout << "Enter a step-up value: \n";
    int by = 13;
    // cin >> by;
    for (i = 0; i < 100; i += by){
        cout << i << endl;
    }

    // following read letters in string with for loop
    cout << "--- next, mirror change ---\nEnter a word: \n";
    string word = "Robotics save the world.";
    // getline(cin, word);
    // display letters in reverse order
    cout << word << "  |  ";
    for (int i = word.size() - 1; i >= 0; i--){
        cout << word[i];
    }
    cout << "\nFinished, bye.\n";
    int a = 20, b = 20;

    cout << "a++ = " << a++ << ", ++b = " << ++b << endl;
    a++; ++b;
    cout << "a = " << a << ", b = " << b << endl;
    a++; ++b;
    cout << "a = " << a << ", b = " << b << endl;
    a++; ++b;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}


int main(){
    for_loop(1);
    return 0;
}
