//
// Created by Moynstain_MBA on 2022/12/12.
//

#include "iostream"
#include "chap10_stock10.h"

using std::cin;
using std::cout;
using std::endl;


/// constructors
Stock::Stock() {
    cout << "Default constructor called:\n";
    company = "Default Name";
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}

Stock::Stock(const std::string &co, long n, double pr) {
    cout << "Constructor using <" << co << "> called.\n";
    company = co;

    if (n < 0){
        cout << "Number of shares can't be negative. <" << company << "> shares set to 0.\n";
        shares = 0;
    } else{
        shares = n;
    }
    share_val = pr;
    set_tot();
}

/// noisy destructor
Stock::~Stock() {
    cout << "Destructor called. No <" << company << "> anymore.\n";
}

/// other methods
void Stock::buy(long num, double price) {
    if (num < 0){
        cout << "Number of shares purchased can't be negative. Transaction aborted.\n";
    } else {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(long num, double price) {
    if (num < 0){
        cout << "Number of shares sold can't be negative. Transaction aborted.\n";
    } else if (num > shares){
        cout << "You can't sell more than you have. Transaction aborted.\n";
    } else {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price) {
    share_val = price;
    set_tot();
}

void Stock::show() {
    std::ios_base::fmtflags original = cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
    std::streamsize prec = cout.precision(3);
    cout << "Info:\n";
    cout << "\tCompany:    \t" << company << endl;
    cout << "\tShares:     \t" << shares << endl;

    cout.precision(2);
    cout << "\tShare Price:\t$ " << share_val << endl;
    cout << "\tTotal Worth:\t" << total_val << endl;

    cout.setf(original, std::ios_base::floatfield);
    cout.precision(3);
}