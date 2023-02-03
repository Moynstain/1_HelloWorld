//
// Created by Moynstain_MBA on 2022/12/15.
//
//
// Created by Moynstain_MBA on 2022/12/14.
//

#include "iostream"
#include "chap11_vector_practice.h"
#include "cmath"

using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;

namespace VECTOR{
    /// compute degrees in one radian
    const double Rad_to_Deg = 45.0 / atan(1.0);

    /// private methods


    void Vector::set_x() { /// set x value from polar coordinate
        x;
    }

    void Vector::set_y() { /// set y value from polar coordinate
        y;
    }

    /// public methods
    double Vector::magval(const Vector &v) const {
        double mag = sqrt( pow(v.xval(), 2) + pow(v.yval(), 2));
        return mag;
    }
    double Vector::angval(const Vector &v) const{
        double ang;
        if (v.xval() == 0.0 && v.yval() == 0.0){
            ang = 0.0;
        } else{
            ang = atan2(v.yval(), v.xval());
        }
        return ang;
    }


    Vector::Vector() { // default constructor
        x = y = 0.0;
        mode = RECT;
    }

    Vector::~Vector() {
        ;
    }

    Vector::Vector(double n1, double n2, Mode form) {
        mode = form;
        if (form == RECT){
            x = n1;
            y = n2;
        } else if (form == POL){
            double mag = n1;
            double ang = n2 / Rad_to_Deg;
            set_x();
            set_y();
        } else{
            cout << "Error: incorrect argument to vector -- ";
            cout << "vector set to 0.\n";
            x = y = 0.0;
            mode = RECT;
        }
    }

    void Vector::reset(double n1, double n2, Mode form) {
        mode = form;
        if (form == RECT){
            x = n1;
            y = n2;

        } else if (form == POL){
            double mag = n1;
            double ang = n2 / Rad_to_Deg;
            set_x();
            set_y();
        } else{
            cout << "Error: incorrect argument to vector -- ";
            cout << "vector set to 0.\n";
            x = y = 0.0;
            mode = RECT;
        }
    }


    void Vector::polar_mode() {
        mode = POL;
    }

    void Vector::rect_mode() {
        mode = RECT;
    }

    /// operator overloading
    Vector Vector::operator+(const Vector &v) const { /// add
        return Vector(x + v.x, y + v.y);
    }

    Vector Vector::operator-() const { /// reverse
        return  Vector(-x, -y);
    }

    Vector Vector::operator-(const Vector &v) const { /// subtract
        return Vector(x - v.x, y - v.y);
    }

    Vector Vector::operator*(double n) const {
        return Vector(n * x, n * y);
    }

    /// friend methods
    Vector operator*(double n, const Vector & v) {
        return v * n;
    }

    // display rect_coordinates if RECT
    // display pol_coordinates if POL
    std::ostream & operator<<(std::ostream & os, const Vector & v){
        if (v.mode == Vector::RECT){
            os << "(x, y) = (" << v.x << ", " << v.y << ")";
        } else if (v.mode == Vector::POL){
            os << "(mag, ang) = (" << v.magval(v) << ", " << v.angval(v) * Rad_to_Deg << ")";
        } else{
            os << "ERROR: Vector obj INVALID";
        }
        return os;
    }
}