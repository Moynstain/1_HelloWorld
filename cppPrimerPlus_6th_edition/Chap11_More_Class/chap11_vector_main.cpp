//
// Created by Moynstain_MBA on 2022/12/14.
//

#include "iostream"
#include "cstdlib" /// rand(), srand()
#include "ctime" /// time()
#include "chap11_vector.h"
#include "fstream"

int main(){
    using namespace std;
    using namespace VECTOR;

    srand(time(0));
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;

    ofstream fout;
    fout.open("the_walk.txt");
    cout << "Enter a target distance (q to quit): \n";
    while (cin >> target){
        cout << "Enter step length: \n";
        if (!(cin >> dstep)){
            break;
        }
        while (result.magval() < target){
            direction = rand() * 360;
            step.reset(dstep, direction, VECTOR::Vector::POL);
            result = result + step;
            fout << result << endl;
            steps++;
        }
        cout << "After " << steps << " steps, the subject has the following location:\n";
        cout << result << endl;
        result.polar_mode();
        cout << " or\n" << result << endl;
        cout << "Average outward distance per step = " << result.magval() / steps << endl;
        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Enter target distance (q to quit): \n";
    }
    cout << "Done.\n";
    cin.clear();
    while (cin.get() != '\n'){
        continue;
    }



    return 0;
}