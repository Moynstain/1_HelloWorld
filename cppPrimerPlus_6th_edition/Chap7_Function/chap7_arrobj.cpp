//
// Created by Moynstain_MBA on 2022/11/30.
//
#include "iostream"
#include "array"
#include "cstring"

using std::cin;
using std::cout;
using std::endl;

const int seasons = 4;
const std::array<std::string, seasons> seasons_name = {
        "spring", "summer", "fall", "winter"
};

/// function prototype
// modify array object
void fill(std::array<double, seasons> * ptr_arr);

// use array without modifying
void show(std::array<double, seasons> arr);

/// main function
int main(){
    std::array<double, seasons> expenses{};
    fill(&expenses);
    show(expenses);
    return 0;
}

/// functions
void fill(std::array<double, seasons> * ptr_arr){
    for (int i = 0; i < seasons; i++){
        cout << "Enter " << seasons_name[i] << " expenses: ";
        cin >> (*ptr_arr)[i];
    }
};

void show(std::array<double, seasons> arr){
    double total = 0;
    cout << "\nEXPENSES\n";
    for (int i = 0; i < seasons; i++){
        cout << seasons_name[i] << ": " << arr[i] << endl;
        total += arr[i];
    }
    cout << "Total Expenses: " << total << endl;
};