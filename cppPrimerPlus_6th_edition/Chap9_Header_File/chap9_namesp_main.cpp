//
// Created by Moynstain_MBA on 2022/12/7.
//

#include "iostream"
#include "chap9_namesp.h"

using std::cin;
using std::cout;
using std::endl;
using debts::Debt;
using debts::showDebt;


/// func prototype
void other(void);
void another(void);

/// main func

int main(void){
    Debt golf = {
            {"Benny", "Goatsniff"}, 120.0
    };
    showDebt(golf);
    other();
    another();
    return 0;
}

void other(void){
    using namespace debts;
    Person dg = {"Doodles", "Glister"};
    showPerson(dg);
    cout << endl;
    Debt zippy[3];
    int i;
    for (i = 0; i < 3; i++){
        getDebt(zippy[i]);
    }
    for (i = 0; i < 3; i++) {
        showDebt(zippy[i]);
    }
    cout << "Total debt: $" << sumDebt(zippy, 3) << endl;
    return;
}

void another(void){
    using pers::Person;
    Person collector = {"Milo", "Rightshift"};
    pers::showPerson(collector);
    cout << endl;

}