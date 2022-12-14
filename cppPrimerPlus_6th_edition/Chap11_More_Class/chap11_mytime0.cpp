//
// Created by Moynstain_MBA on 2022/12/13.
//

#include "iostream"
#include "chap11_mytime0.h"

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

Time Time::Sum(const Time &t) const {
    Time sum;
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + t.hours;
    sum.minutes %= 60;
    return sum;
}

void Time::show() const {
    std::cout << hours << " hours, " << minutes << " minutes.\n";
}