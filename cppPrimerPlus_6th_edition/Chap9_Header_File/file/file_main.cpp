//
// Created by Moynstain_MBA on 2022/12/5.
//

//
// Created by Moynstain_MBA on 2022/12/5.
//

#include "iostream"
#include "coordin.h"

using std::cin;
using std::cout;
using std::endl;

int main(){
    rect_point r_place{};
    polar_point p_place{};

    cout << "Enter the x and y values: \n";
    while (cin >> r_place.x >> r_place.y){
        p_place = rect_to_polar(r_place);
        show_polar(p_place);
        cout << "Next two values of x and y: (q to quit)\n";
    }
    cout << "Done!\n";
    return 0;
}