//
// Created by Moynstain_MBA on 2022/11/30.
//

#include "iostream"

using std::cin, std::cout, std::endl;

/// func prototype
double add(double x, double y);
double multiple(double x, double y);
double minus(double x, double y);
double divide(double x, double y);

double calculate(double x, double y, double (*p_func)(double, double));

/// main func
int main(){
    double (*cal_ptr[4]) (double, double) = {add, minus, multiple, divide};
    cout << "insert two double numbers and choose a calculate function (1~4): \n";
    double x, y;
    int cal;
    while (cin >> x >> y >> cal){
        cout << "insert two double numbers and choose a calculate function (1~4): \n";
        cout << "Result = " << calculate(x, y, cal_ptr[cal + 1]) << endl;
    }
    cout << "Done.\n";
    return 0;
}

/// funcs
double add(double x, double y){
    return x + y;
};

double minus(double x, double y){
    return x - y;
};

double multiple(double x, double y){
    return x * y;
};

double divide(double x, double y){
    return x / y;
};

double calculate(double x, double y, double (*p_func)(double, double)){
    return p_func(x, y);
};