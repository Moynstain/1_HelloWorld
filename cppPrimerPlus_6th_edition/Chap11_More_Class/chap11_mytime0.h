//
// Created by Moynstain_MBA on 2022/12/13.
//

#ifndef INC_1_HELLOWORLD_CHAP11_MYTIME0_H
#define INC_1_HELLOWORLD_CHAP11_MYTIME0_H

class Time{
private:
    int hours;
    int minutes;
public:
    Time();
    ~Time();
    Time(int h, int m = 0);
    void AddMin(int m);
    void AddHr(int h);
    void Reset(int h = 0, int m = 0);
    Time Sum(const Time & t) const;
    // Time operator+(const Time & t) const;
    void show() const;
};


#endif //INC_1_HELLOWORLD_CHAP11_MYTIME0_H
