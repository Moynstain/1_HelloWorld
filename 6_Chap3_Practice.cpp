//
// Created by Moynstain_MBA on 2022/2/14.
// All passed at 2022/2/15

#include "iostream"
#include "cmath"
using namespace std;

int main(){
    // Practice 1
    cout << "Insert your height (cm) in integer: " << endl;
    const double height_factor_1 = 0.01;
    int height_cm;
    cin >> height_cm;
    cout << "Your height is: " << height_cm * height_factor_1 << " m." << endl;

    // Practice 2
    int height_foot, height_inch;
    double height_m, weight_pound, weight_kg;
    const double height_f2i = 12, height_i2m = 0.0254, weight_kg2p = 2.2;
    cout << "Insert your height of foot in integer: \n";
    cin >> height_foot;
    cout << "Insert your height of inch in integer: \n";
    cin >> height_inch;
    cout << "Insert your weight of pound: \n";
    cin >> weight_pound;

    height_m = (height_foot * height_f2i + height_inch) * height_i2m;
    cout << "Your height (m) is: " << height_m << endl;
    weight_kg = weight_pound / weight_kg2p;
    const double BMI = weight_kg / pow(height_m, 2);
    cout << "Your weight is: " << weight_kg << " kg. \nYour BMI is: " << BMI << " .\n";

    // Practice 3
    double degree, minute, second;
    cout << "Enter a latitude in degrees, minutes and seconds:";
    cout << "First, enter the degree: \n";
    cin >> degree;
    cout << "Next, enter the minutes of arc: \n";
    cin >> minute;
    cout << "Finally, enter the seconds of arc: \n";
    cin >> second;
    const double factor = 60;
    double degrees = degree + (minute + second / factor) / factor;
    cout << degree << " degrees, " << minute << " minutes, "
         << second << " seconds = " << degrees << " degrees.\n";

    // Practice 4
    cout << "Enter the number of seconds: \n";
    long seconds_in;
    cin >> seconds_in;
    const int day2hour = 24,
              hour2minute = 60,
              minute2second = 60;
    int days = int (seconds_in / minute2second / hour2minute / day2hour);
    int hours = int (seconds_in / minute2second / hour2minute % day2hour);
    int minutes = int (seconds_in / minute2second % hour2minute);
    int seconds = int (seconds_in % minute2second);
    cout << days << " days, " << hours << " hours, "
         << minutes << " minutes, " << seconds << " seconds.\n";

    // Practice 5
    cout << "Enter the world's population: \n";
    long long world_pop;
    cin >> world_pop;
    cout << "Enter the population of US: \n";
    long long US_pop;
    cin >> US_pop;
    auto pop_ratio = double(US_pop) / double(world_pop) * 100;
    cout << "The population of US is " << pop_ratio << "% of the world population.\n";

    // Practice 6
    const double km2m = 0.6214; // 1 km = 0.6214 mile
    const double g2l = 3.875; // 1 gallon = 3.875 liter
    cout << "Insert your driving distance in mile: \n";
    double distance_mile;
    cin >> distance_mile;
    cout << "Insert your gas consumption in gallon: \n";
    double gas_gallon;
    cin >> gas_gallon;
    double gas_mpg = distance_mile / gas_gallon;
    cout << "Your driving gas consumption is: " << gas_mpg << " mpg.\n";

    // Practice 7
    cout << "Insert your driving gas consumption in l/100km: \n";
    double gas_lkm, gas_lkm2mpg, gas_mpg2lkm;
    cin >> gas_lkm;
    // 10 l/100km
    gas_lkm2mpg = 1 / (gas_lkm / 3.875 / 0.6214 / 100);
    cout << "Your gas consumption in mpg is: " << gas_lkm2mpg << " mpg.\n";
    cout << "Insert your driving gas consumption in mpg: \n";
    cin >> gas_mpg;
    gas_mpg2lkm = 1 / (gas_mpg * 3.875 / 0.6214 / 100);
    cout << "Your gas consumption in lkm is: " << gas_mpg2lkm << " l/100km.\n";


}
