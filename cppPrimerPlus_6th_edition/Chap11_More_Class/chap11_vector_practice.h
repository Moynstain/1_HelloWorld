//
// Created by Moynstain_MBA on 2022/12/15.
//

#ifndef INC_1_HELLOWORLD_CHAP11_VECTOR_PRACTICE_H
#define INC_1_HELLOWORLD_CHAP11_VECTOR_PRACTICE_H
#include "iostream"

namespace VECTOR{
    class Vector{
    public:
        enum Mode {RECT, POL};
    private:
        double x;
        double y;
        // double mag;
        // double ang;
        Mode mode;
        /// private methods for setting values
        // void set_mag();
        // void set_ang();
        void set_x();
        void set_y();
    public:
        Vector();
        ~Vector();
        Vector(double n1, double n2, Mode form = RECT);
        void reset(double n1, double n2, Mode form = RECT);
        double xval() const {return x;} // report x value
        double yval() const {return y;}
        double magval(const Vector & v) const;
        double angval(const Vector & v) const;
        void polar_mode(); // set mode to polar
        void rect_mode();
        /// operator overload
        Vector operator+(const Vector & v) const;
        Vector operator-(const Vector & v) const;
        Vector operator-() const;
        Vector operator*(double n) const;
        /// friends func
        friend Vector operator*(double n, const Vector & v);
        friend std::ostream & operator<<(std::ostream & os, const Vector & v);
    };
}

#endif //INC_1_HELLOWORLD_CHAP11_VECTOR_PRACTICE_H
