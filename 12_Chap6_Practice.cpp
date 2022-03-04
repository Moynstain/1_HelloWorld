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
int practice3(int val){
    char input;
    do {
        cout << "Please enter one of the following choices (enter q to quit): \n";
        cout << "a) carnivore\n" << "b) pianist\n";
        cout << "c) tree\n" << "d) game\n";
        cin.get(input);
        cin.get();
        switch (input) {
            case 'a':
                cout << "Oh i don't what carnivore is, but hannibal the tv is great.\n";
                break;
            case 'b':
                cout << "Pianist recommendation, Langlang.\n";
                break;
            case 'c':
                cout << "Trees down, timber!\n";
                break;
            case 'd':
                cout << "Red dead redemption 2 is the best!\n";
                break;
            default:
                cout << "Please enter a valid value:\n";
        }
    } while (input != 'q');

    cout << "--- practice 3 passed ---\n";
    return 0;
}

// practice 5 2022/3/4
int tax_level(double income){
    int tax_level = 0;
    double tax_0 = 5000;
    double tax_10 = 15000;
    double tax_15 = 35000;
    if (income < tax_0){
        tax_level = 1;
    }else if (income > tax_0 && income < tax_10){
        tax_level = 2;
    }else if (income > tax_10 && income < tax_15){
        tax_level = 3;
    }else if (income >= tax_15){
        tax_level = 4;
    }
    return tax_level;
}


int practice5(int val){
    string income;
    string unit = " rmb";
    int income_level;
    double tax, tax0, tax1, tax2, tax3, tax4;
    tax0 = 0;
    do {
        cout << "Enter your income number to calculate the tax (press q to exit): \n";
        getline(cin, income);
        if (income == "q"){
            break;
        }
        auto income_d = stod(income);
        income_level = tax_level(income_d);
        switch (income_level) {
            case 1:
                tax = tax0;
                cout << "Your tax = " << tax  << unit << endl;
                continue;
            case 2:
                tax1 = (income_d - 5000) * 0.1;
                tax = tax0 + tax1;
                cout << "Your tax = " << tax  << unit << endl;
                continue;
            case 3:
                tax1 = 10000 * 0.1;
                tax2 = (income_d - 15000) * 0.15;
                tax = tax0 + tax1 + tax2;
                cout << "Your tax = " << tax  << unit << endl;
                continue;
            case 4:
                tax1 = 10000 * 0.1;
                tax2 = 20000 * 0.15;
                tax3 = (income_d - 35000) * 0.2;
                tax = tax1 + tax2 + tax3;
                cout << "Your tax = " << tax  << unit << endl;
                continue;
            default:
                break;
        }
    } while (income != "q");

    cout << "--- practice 5 passed ---\n";
    return 0;
}



int main(){
    // practice1(1); // passed 2022/3/4
    // practice2(1); // passed 2022/3/4
    // practice3(1);
    // cout << income_level(32100);
    practice5(1);
    return 0;
}
