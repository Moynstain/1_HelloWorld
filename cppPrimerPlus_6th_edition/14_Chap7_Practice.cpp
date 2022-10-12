//
// Created by Moynstain_MBA on 2022/3/9.
//

#include "iostream"
#include "cstring"
using namespace std;

/// practice 1 2022/3/9
double avg(double x, double y){
    double avg;
    avg = 2.0 * x * y / (x + y);
    return avg;
}

int p1(int val){
    int a, b;
    double result;
    do {
        cout << "Enter 2 integer to calculate the average value: \n";
        cin >> a;
        cin >> b;
        result = avg(a, b);
        cout << "result = " << result << endl;
        cout << "--- next round ---\n";
    }while (a != 0 & b != 0);
    return 0;
}

/// practice 2 2022/3/9
const int number = 10;

// following calculating result
double avg_cal(double data[number]){
    double sum = 0;
    double avg = 0;
    for (int i = 1; i <= number; i++) {
        if (data[i] != -1){
            sum = sum + data[i];
        }
        if (data[i] == -1){
            avg = sum / (i - 1);
            break;
        }
    }
    return avg;
}

// following display result
int display(double data[number]){
    cout << "Results are as following:\n";
    for (int i = 0; i < number; i++){
        if (data[i] != -1) {
            cout << data[i] << "\t";
        }
        if (data[i] == -1){
            cout << "\ndisplayed all.\n";
            break;
        }
    }
    return 0;
}

// following insert result
int insert(double data){
    double result_all[number];
    for (double & i : result_all) {
        i = -1;
    }
    string result;
    int i = 0;
    for (i; i < number; i++){
        cout << "Please enter golf result no. " << i + 1 << "(\"q\"to quit): ";
        getline(cin, result);
        if (result == "q"){
            break;
        }
        // cout << result_all[i] << endl;
        // cout << "stod result: " << result << endl;
        result_all[i] = stod(result);
        cout << result_all[i] << endl;
    }

    cout << i << " values inserted.\n";
    display(result_all);
    cout << "Avg_result = " << avg_cal(result_all) << endl;
    return 0;
}
// following practice 2 main function
int p2(int val){
    insert(1);

    return 0;
}

/// practice 3 2022/3/10
struct box{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

// practice 3.a
float volume_cal(float a, float b, float c){
    float volume;
    volume = a * b * c;
    return volume;
}


int p3(int val){



    return 0;
}


/// main function
int main(){
    // p1(1); // passed 2022/3/9
    p2(1); // passed 2022/3/10

    return 0;
}