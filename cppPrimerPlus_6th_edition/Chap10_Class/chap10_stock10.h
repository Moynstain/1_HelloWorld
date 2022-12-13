//
// Created by Moynstain_MBA on 2022/12/12.
//

#ifndef INC_1_HELLOWORLD_CHAP10_STOCK10_H
#define INC_1_HELLOWORLD_CHAP10_STOCK10_H

#include "iostream"

class Stock{
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot(){ total_val = shares * share_val;}

public:
    /// 2 constructors
    Stock();
    Stock(const std::string & co, long n = 0, double pr = 0.0);

    /// noisy destructor
    ~Stock();

    /// pub funcs
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show();
};

#endif //INC_1_HELLOWORLD_CHAP10_STOCK10_H
