//
// Created by Moynstain_MBA on 2022/12/7.
//

#ifndef INC_1_HELLOWORLD_CHAP9_NAMESP_H
#define INC_1_HELLOWORLD_CHAP9_NAMESP_H

#include "string"
namespace pers{
    struct Person{
        std::string fname;
        std::string lname;
    };
    void getPerson(Person &);
    void showPerson(const Person &);
}

namespace debts{
    using namespace pers;
    struct Debt{
        Person name;
        double amount;
    };
    void getDebt(Debt &);
    void showDebt(const Debt &);
    double sumDebt(const Debt ar[], int n);
}

#endif //INC_1_HELLOWORLD_CHAP9_NAMESP_H
