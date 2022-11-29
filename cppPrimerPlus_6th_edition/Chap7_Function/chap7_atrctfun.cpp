//
// Created by Moynstain_MBA on 2022/11/30.
//
#include "iostream"
#include "cmath"

using std::cin;
using std::cout;
using std::endl;

const double rad_to_degree_factor = 180 / 3.14159265;

/// struct declaration
struct polar{
    double distance;
    double angle;
};

struct rect{
    double x;
    double y;
};

/// function prototype
polar rect_to_polar(rect rect_position);
void show_polar(polar polar_position);

/// main function
int main(){
    rect rect_point{};
    polar polar_point{};

    cout << "Enter the position of a point with x and y: \n";
    while (cin >> rect_point.x >> rect_point.y){
        polar_point = rect_to_polar(rect_point);
        show_polar(polar_point);
        cout << "Next two numbers with x and y (q to quit): \n";
    }
    cout << "Done. 427ms\n";
    return 0;
}

/// functions
polar rect_to_polar(rect rect_position){
    polar result{};
    result.distance = sqrt(pow(rect_position.x, 2) +
                           pow(rect_position.y, 2) );
    result.angle = atan2(rect_position.y, rect_position.x);
    return result;
};

void show_polar(polar polar_position){
    cout << "Distance = " << polar_position.distance << endl;
    cout << "Angle = " << polar_position.angle * rad_to_degree_factor;
    cout << " degrees.\n";
};