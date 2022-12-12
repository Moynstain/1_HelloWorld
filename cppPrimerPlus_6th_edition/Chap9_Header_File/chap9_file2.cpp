//
// Created by Moynstain_MBA on 2022/12/5.
//

#include "iostream"
#include "cmath"
#include "chap9_coordin.h"

using std::cin;
using std::cout;
using std::endl;

/// convert rec_point to polar_point
polar_point rect_to_point(rect_point xy_position){
    polar_point answer{};
    answer.distance = sqrt(pow(xy_position.x, 2) + pow(xy_position.y, 2));
    answer.angle = atan2(xy_position.y, xy_position.x);
    return answer;
}

void show_polar(polar_point dapos){
    const double rad_to_degree = 57.29577951;
    cout << "distance = " << dapos.distance;
    cout << "\nangel = " << dapos.angle;
    cout << " degrees.\n";
}