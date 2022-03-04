//
// Created by Moynstain_MBA on 2022/3/4.
//
#include "iostream"
#include "string"
using namespace std;


// practice 1 2022/3/4
int practice1(int val){
    cout << "insert something randomly: \n";
    char input;
    char output;

    cin.get(input);
    while (input != '@'){
        if (isalpha(input)){
            if (isupper(input)){
                output = tolower(input);
                cout << output;
            } else{
                output = toupper(input);
                cout << output;
            }
        }
        cin.get(input);
        if (input == '\n'){
            cout << endl;
        }
    }

    cout << "--- practice 1 passed ---\n";
    return 0;
}

// practice 2 2022/3/4

bool test_double(string x) {
    try {
        double y = stod(x);
    }
    catch (const exception&){
        return false;
    }
    return true;
}

int practice2(int val){
    cout << "insert 10 donation values in double type: \n";
    int size = 10;
    string donation;
    double dona_array[size];
    double sum = 0;
    double avg;
    int count = 0;
    // cin >> donation;
    for (int i = 1; i <= size; i++){
        cin >> donation;
        // cout << "test1: " << isnumber(donation) << endl;
        if (test_double(donation)){
            //dona_array[i] = donation;
            sum = sum + stod(donation);
            avg = sum / i;
            cout << "value no." << i << "= " << stod(donation) << endl;
            cout << "sum of previous " << i << " value = " << sum << endl;
            cout << "average of sum = " << avg << endl;
            if (stod(donation) > avg){
                count++;
                cout << "here's " << count << " value greater than average.\n";
            }
        } else{
            cout << "WARNING: non digit value detected.\n";
            break;
        }
    }
    cout << endl;
    cout << "--- average value = " << avg << endl;
    cout << "--- num_of_value greater than avg = " << count << endl;

    return 0;
}

// practice 3 2022/3/4



int main(){
    // practice1(1); // passed 2022/3/4
    practice2(1); // passed 2022/3/4


    return 0;
}
