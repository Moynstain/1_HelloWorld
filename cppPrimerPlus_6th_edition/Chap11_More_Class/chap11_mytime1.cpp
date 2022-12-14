//
// Created by Moynstain_MBA on 2022/12/13.
//

#include "iostream"
#include "chap11_mytime1.h"

Time::Time() {
    hours = minutes = 0;
}

Time::~Time() {
    // std::cout << "\ncalled function destroyed\n";
}

Time::Time(int h, int m) {
    hours = h;
    minutes = m;
}

void Time::AddMin(int m) {
    minutes += m;
    hours += minutes / 60;
    minutes %= 60;
}

void Time::AddHr(int h) {
    hours += h;
}

void Time::Reset(int h, int m) {
    hours = h;
    minutes = m;
}

Time Time::operator+(const Time &t) const {
    Time sum;
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + t.hours;
    sum.minutes %= 60;
    return sum;
}

void Time::show() const {
    std::cout << hours << " hours, " << minutes << " minutes.\n";
}

Time Time::operator*(double mult) const {
    Time result;
    long totalminutes = hours * mult * 60 + minutes * mult;
    result.minutes = totalminutes % 60;
    result.hours = totalminutes / 60;
    return result;
}

Time operator*(double n, const Time & t){
     return t * n;
};

//Time operator<<(std::ostream & os, Time & t){
//    os << t.hours << " hours, " << t.minutes << " minutes" << std::endl;
//}

std::ostream & operator<<(std::ostream & os, const Time & t){
    os << t.hours << " hours, " << t.minutes << " minutes";
    return os;
}