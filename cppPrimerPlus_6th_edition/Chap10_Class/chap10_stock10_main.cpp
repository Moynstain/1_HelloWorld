//
// Created by Moynstain_MBA on 2022/12/12.
//

#include "iostream"
#include "chap10_stock10.h"

using std::cin;
using std::cout;
using std::endl;

int main(){
    cout << "Using constructors to create new objects\n";
    Stock stock1("Nanosmart", 12, 20.0);
    stock1.show();
    Stock stock2 = Stock("Bofofo Obj", 2, 2.0);
    stock2.show();

    cout << "\nAssigning stock1 to stock2:\n";
    stock2 = stock1;
    cout << "Listing stock1 and stock2:\n";
    stock1.show();
    stock2.show();

    cout << "\nUsing a constructor to reset an ojbect:\n";
    stock1 = Stock("Niffy Cats", 10, 50.0);
    stock1.show();
    cout << "Done.\n";



    return 0;
}