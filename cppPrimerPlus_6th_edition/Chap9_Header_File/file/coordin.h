//
// Created by Moynstain_MBA on 2022/12/5.
//

#ifndef INC_1_HELLOWORLD_COORDIN_H
#define INC_1_HELLOWORLD_COORDIN_H

/// struct def
struct polar_point{
    double distance;
    double angle;
};

struct rect_point{
    double x;
    double y;
};

/// func prototype
polar_point rect_to_polar(rect_point xy_position);
void show_polar(polar_point polar_position);



#endif //INC_1_HELLOWORLD_COORDIN_H
