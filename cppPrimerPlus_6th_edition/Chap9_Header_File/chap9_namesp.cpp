//
// Created by Moynstain_MBA on 2022/12/7.
//

#include "iostream"
#include "chap9_namesp.h"

namespace pers{
    using std::cin;
    using std::cout;
    using std::endl;

    void getPerson(Person & rp){
        cout << "Enter first name: ";
        cin >> rp.fname;
        cout << "Enter last name: ";
        cin >> rp.lname;
    }

    void showPerson(const Person & rp){
        cout << rp.lname << ", " << rp.fname << endl;
    };
}

namespace debts{
    void getDebt(Debt & rd){
        getPerson(rd.name);
        cout << "Enter debt: ";
        cin >> rd.amount;
    }

    void showDebt(const Debt & rd){
        showPerson(rd.name);
        cout << ": $" << rd.amount << endl;
    }

    double sumDebt(const Debt ar[], int n){
        double total = 0.0;
        for (int i = 0; i < n; i++){
            total += ar[i].amount;
        }
        return total;
    }
}