//
// Created by Moynstain_MBA on 2022/11/29.
//

#include "iostream"
using std::cin;
using std::cout;
using std::endl;
const int MAX = 5;

/// prototype of functions
int fill_array(double arr[], int limit);
void show_array(const double arr[], int n);
void revalue_array(double arr[], double factor, int n);

int main(){
    double properties[MAX];
    int size = fill_array(properties, MAX);
    show_array(properties, size);
    if (size > 0){
        cout << "Time to maximum your property! enter a value to get rich: ";
        double factor;
        while (!(cin >> factor)){
            cin.clear();
            while (cin.get() != '\n'){
                continue;
            }
            cout << "Get me a number to be rich: ";
        }
        revalue_array(properties, factor, size);
        show_array(properties, size);
    }
    cout << "Done!\n";
    cin.clear();
    return 0;
}

int fill_array(double arr[], int limit){
    double temp;
    int i;
    for (i = 0; i < limit; i++){
        cout << "Enter value #" << i+1 << ": ";
        cin >> temp;
        if (!cin){
            cin.clear();
            while (cin.get() != '\n'){
                continue;
            }
            cout << "Input Error. Input process terminated.\n";
            break;
        }
        else if(temp < 0){
            break;
        }
        arr[i] = temp;
    }
    return i;
};

void show_array(const double arr[], int n){
    for (int i = 0; i < n; i++){
        cout << "Property #" << i+1 << ": $" << arr[i] << endl;
    }
};

void revalue_array(double arr[], double factor, int n){
    for (int i = 0; i < n; i++){
        arr[i] *= factor;
    }
};
