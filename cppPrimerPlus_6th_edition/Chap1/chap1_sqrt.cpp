//
// Created by Moynstain_MBA on 2022/10/13.
//

#include "iostream"
#include "cmath"

using std::cout, std::cin, std::endl;

int main(){
    double area;
    cout << "Enter the floor area and calculate its sqrt value: " << endl;
    cin >> area;

    double side;
    side = sqrt(area);

    cout << "The side value of the area is " << side << ".\n";


    return 0;
}
