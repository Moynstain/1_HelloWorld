//
// Created by Moynstain_MBA on 2022/2/11.
// Practice for Chap. 2 in 《C++ Primer 6th Edition》
#include "iostream"
using namespace std;

// Practice 3 function
string func1(string a){
    cout << "Three blind mice" << endl;
    cout << "Three blind mice" << endl;
    return a;
}

string func2(string a){
    cout << "See how they run" << endl;
    cout << "See how they run" << endl;
    return a;
}

// Practice 5 function
double Fahrenheit(double a){
    double b = 1.8 * a + 32.0;
    return b;
}

// Practice 6 function
double au(double lightyear){
    double au;
    au = 63240 * lightyear;
    return au;
}

// Practice 7 function;
void time(double hour, double minute){
    cout << "Time: " << hour << ":" << minute << endl;
}

int main(){
    cout << "Practice 1 Code: " << endl;
    cout << "Name: Moynstain \nAddress: SUSTech" << endl;

    cout << endl << "Practice 2 Code: " << endl;
    int distance;
    cout << "Insert a distance variable in int type.";
    cin >> distance;
    cout << distance << " long = " << distance * 220 << " yard." << endl;

    cout << endl << "Practice 3 Code: " << endl;
    func1("1");
    func2("1");

    cout << endl << "Practice 4 Code: " << endl;
    int age;
    cout << "Insert your age in int type:" << endl;
    cin >> age;
    int month = 12 * age;
    cout << "Your age includes: " << month << " months.\n";

    cout << endl << "Practice 5 Code: " << endl;
    cout << "Insert a Temperature in Celsius: \n";
    double temp;
    cin >> temp;
    cout << temp << " Celsius equals to " << Fahrenheit(temp) << " Fahrenheit.\n";

    cout << endl << "Practice 5 Code: " << endl;
    cout << "Insert a lightyear in double type: \n";
    double lightyear;
    cin >> lightyear;
    cout << lightyear << " lightyear equals to: " << au(lightyear) << " astronomical units.\n";

    cout << "\nPractice 5 Code: \n";
    int hour, minute;
    cout << "Enter the number of hours: \n";
    cin >> hour;
    cout << "Enter the number of minutes: \n";
    cin >> minute;
    time(hour, minute);
}