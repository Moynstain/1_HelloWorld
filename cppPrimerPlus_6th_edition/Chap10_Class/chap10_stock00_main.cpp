//
// Created by Moynstain_MBA on 2022/12/12.
//

#include "iostream"
#include "chap10_stock00.h"

using std::cin;
using std::cout;
using std::endl;

int main(){
    Stock person1;
    person1.acquire("Apple", 20, 12.50);
    person1.show();
    person1.buy(50, 13.5);
    person1.show();
    person1.buy(100, 15);
    person1.show();
    person1.sell(50, 17.5);
    person1.show();
    person1.sell(200, 20);
    person1.show();
    person1.sell(20, 20);
    person1.show();

    return 0;
}