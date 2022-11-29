//
// Created by Moynstain_MBA on 2022/11/30.
//

#include "iostream"
#include "cmath"

using std::cin;
using std::cout;
using std::endl;

/// func prototype
double betsy(int);
double pam(int);

void estimate(int lines, double (*pf)(int));

/// main func
int main(){
    cout << "How many lines of the code: \n";
    int lines;
    cin >> lines;
    cout << "Betsy's estimation: ";
    estimate(lines, betsy);
    cout << "Pam's estimation: ";
    estimate(lines, pam);
    return 0;
}

/// funcs
double betsy(int lines){
    return 0.05 * lines;
};

double pam(int lines){
    return (0.03 * lines + 0.0004 * pow(lines, 2));
};

void estimate(int lines, double (*pf)(int)){
    cout << lines << " lines costs ";
    cout << (*pf)(lines) << " second(s).\n";
};