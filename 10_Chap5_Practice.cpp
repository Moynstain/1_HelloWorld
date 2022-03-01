//
// Created by Moynstain_MBA on 2022/2/28.
//
#include "iostream"
#include "ios"
#include "string"
#include "ctime"
#include "stdlib.h"
using namespace std;

// practice 1 2022/2/28
int practice1(int test_val){
    cout << "=== following practice 1 ===\n";
    int num1, num2;
    cout << "Insert 2 numbers in integer: \n";
    cin >> num1;
    cin >> num2;
    int num_small, num_big;
    if (num1 <= num2){
        num_small = num1;
        num_big = num2;
    }else {
        num_small = num2;
        num_big = num1;
    }
    cout << "smaller number: " << num_small << endl;
    cout << "bigger number: " << num_big << endl;
    int num_gap = num_big - num_small;
    int sum = 0;
    cout << "num_gap = " << num_gap << endl;
    for (int i = 0; i <= num_gap; i++){
        sum = sum + num_small + i;
    }
    cout << "Final sum = "  << sum << endl;

    cout << "=== practice 1 passed ===\n";
    return 0;
}

// practice 2 2022/3/1
int practice2(int test_val){
    cout << "=== following practice 2 ===\n";
    long double result[100];
    result[0] = 1;
    cout << "0! = " << result[0] << endl;
    for (int i = 1; i <= 100; i++){
        result[i] = result[i-1] * i;
        cout << i << "! = " << result[i] << endl;
    }

    cout << "=== practice 2 passed ===\n";
    return 0;
}

// practice 3 2022/3/1
int practice3(int test_val){
    cout << "=== following practice 3 ===\n";

    cout << "Insert any integer: ";
    int input;
    int sum = 0;
    for (int i = 0; input != 0; i++){
        cin >> input;
        sum = sum + input;
        cout << "Current sum of input value is: " << sum << endl;
    }
    cout << "\nFinal sum of input value is: " << sum << endl;

    cout << "=== practice 3 passed ===\n";
    return 0;
}

// practice 4 2022/3/1
int practice4(int test_val){
    cout << "=== following practice 4 ===\n";

    double per1 = 100, per2 = 100;
    double sum1 = 100, sum2 = 100;
    for (int i = 1; sum1 >= sum2; i++){
        cout << "year no." << i << ": \n";
        sum1 = sum1 + per1 * 0.1;
        sum2 = sum2 + sum2 * 0.05;
        cout << "per1 = " << sum1 << "\nper2 = " << sum2 << endl;
    }
    cout << "\nin year no." << per1 << ", per2 makes more profit than per1.\n";
    cout << "per1 = " << sum1 << ", per2 = " << sum2 << endl;

    cout << "=== practice 4 passed ===\n";
    return 0;
}

// practice 5 2022/3/1
int practice5(int test_val){
    cout << "=== following practice 4 ===\n";
    string months[12] = {
            "January",
            "February",
            "March",
            "April",
            "May",
            "June",
            "July",
            "August",
            "September",
            "October",
            "November",
            "December"
    };
    int books[12];
    int sum = 0;
    for (int i = 1; i <= 12; i++){
        cout << "Enter the books sale amount for " << months[i-1] << ": ";
        cin >> books[i-1];
        sum = sum + books[i-1];
        cout << books[i-1] << endl;
    }
    cout << "The books sale amount of the year are: " << sum << ".\n";

    cout << "=== practice 5 passed ===\n";
    return 0;
}

// practice 5 2022/3/1
int practice6(int test_val){
    cout << "=== following practice 6 ===\n";
    string book_all[3][12];
    int book_sale[3][12];
    int sum[3] = {0, 0, 0};

    for (int i = 1; i <=3; i++){
        for (int j = 1; j<= 12; j++){
            book_all[i-1][j] = "Y" + to_string(i) + "M" + to_string(j);
            book_sale[i-1][j] = int(random()%50);
            cout << book_all[i-1][j] << ":\t" << book_sale[i-1][j] << "\t";
            sum[i-1] = sum[i-1] + book_sale[i-1][j];
        }
        cout << endl << "Sales in Y" + to_string(i-1) + ": " << sum[i-1] << endl;
    }
    int sales_all = sum[0] + sum[1] + sum[2];
    cout << endl << "Sales in 3 years: " << sales_all << endl;

    cout << "=== practice 6 passed ===\n";
    return 0;
}

// practice 7 2022/3/1


int main(){
    cout.setf(ios::fixed, ios::floatfield);
    // practice1(1); // passed 2022/2/28
    // practice2(1); // passed 2022/3/1
    // practice3(1); // passed 2022/3/1
    // practice4(1); // passed 2022/3/1
    // practice5(1); // passed 2022/3/1
    practice6(1);
    return 0;
}