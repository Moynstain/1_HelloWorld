//
// Created by Moynstain_MBA on 2022/2/18.
// Chap4 practice
#include "iostream"
#include "iostream"
#include "cstdio"
#include "cstring"
#include "vector"
#include "array"
using namespace std;

// practice 1&2 2022/2/18
int practice1(int trigger_val){
    cout << "What's your first name? Betty Sue" << endl;
    string first_name;
    getline(cin, first_name);
    // cin.get(first_name); cin.get();

    cout << "What's your last name? Yewe\n";
    string last_name;
    getline(cin, last_name);
    //cin >> last_name; cin.get();

    cout << "What grade do you deserve? B\n";
    string grade;
    getline(cin, grade);
    //cin >> grade; cin.get();

    cout << "What's your age? 22\n";
    int age;
    cin >> age;

    cout << "---output---\n";
    cout << "Name: " << last_name << ", " << first_name << endl;
    cout << "Grade: " << grade << endl;
    cout << "Age: " << age << endl;

    cout << "---practice 1 passed---\n";
    return 0;
}

// practice 3&4 2022/2/22
int practice3(int trigger_val){
    cout << "--- practice 3 ---\n";
    cout << "Enter your first name: \n";
    string first_name;
    getline(cin, first_name);
    cout << "Enter your last name: \n";
    string last_name;
    getline(cin, last_name);
    string name = last_name + ", " + first_name;
    cout << "Here's the information in a single string: " << name << endl;

    cout << "--- practice 3&4 passed ---\n";
    return 0;
}

// practice 5&9 2022/2/22
int practice5(int trigger_val){
    cout << "--- practice 5 ---\n";
    struct candy_bar{
        string brand;
        double price;
        int energy;
    };
    candy_bar snack = {
            "Mocha Munch",
            2.3,
            350
    };
    cout << "snack brand: " << snack.brand << endl;
    cout << "snack price: " << snack.price << endl;
    cout << "snack energy: " << snack.energy << endl;

    cout << "--- practice 5 passed ---\n\n";

    cout << "--- practice 9 following ---\n";
    candy_bar *candy9 = new candy_bar;
    cout << "insert snack2 brand: \n";
    getline(cin, candy9->brand);
    cout << "insert snack2 price: \n";
    cin >> candy9->price;
    cout << "insert snack2 energy: \n";
    cin >> candy9->energy;

    cout << "candy9 brand: " << candy9->brand << endl;
    cout << "candy9 price: " << candy9->price << endl;
    cout << "candy9 energy: " << candy9->energy << endl;
    delete candy9;
    cout << "--- practice 9 passed ---\n";

    return 0;
}

// practice 7&8 2022/2/22
int practice7(int trigger_val){
    cout << "--- practice 6 ---\n";
    struct pizza_record{
        string brand;
        double diameter;
        double weight;
    };
    pizza_record pizza;
    cout << "insert the pizza's brand: \n";
    getline(cin, pizza.brand);
    cout << "insert the pizza's diameter: \n";
    cin >> pizza.diameter;
    cout << "insert the pizza's weight: \n";
    cin >> pizza.weight;

    cout << "pizza's info is as following: \n";
    cout << "pizza brand: " << pizza.brand << endl;
    cout << "pizza diameter: " << pizza.diameter << endl;
    cout << "pizza weight: " << pizza.weight << endl;

    cout << "--- practice 7 passed ---\n";

    pizza_record *pizza2 = new pizza_record;
    cout << "insert pizza2's brand: \n";
    cin >> pizza2->brand;
    cout << "insert pizza2's diameter: \n";
    cin >> pizza2->diameter;
    cout << "insert pizza2's weight: \n";
    cin >> pizza2->weight;
    cout << "pizza2's info is as following: \n";
    cout << "pizza2 brand: " << pizza2->brand << endl;
    cout << "pizza2 diameter: " << pizza2->diameter << endl;
    cout << "pizza2 weight: " << pizza2->weight << endl;
    delete pizza2;

    cout << "--- practice 8 passed ---\n";
    return 0;
}

// practice 10 2022/2/22
int practice10(int trigger_val){
    cout << "--- practice 10 following ---\n";
    array<double, 10> running_results{};
    cout << "insert your 1st running result: \n";
    cin >> running_results[0];
    cout << "insert your 2nd running result: \n";
    cin >> running_results[1];
    cout << "insert your 3rd running result: \n";
    cin >> running_results[2];
    cout << "Your running results are listed below: \n1st result = " << running_results[0] << "s" << endl
         << "2nd result = " << running_results[1] << "s" << endl
         << "3rd result = " << running_results[2] << "s" << endl;
    double avg_result = (running_results[0] + running_results[1] + running_results[2]) / 3;
    cout << "Your average running results, avg_result = " << avg_result << "s" << endl;

    cout << "--- practice 10 passed ---\n";
    return 0;
}

int main(){
    // practice1(1); // practice 1&2 passed
    // practice3(1); // practice 3&4 passed
    // practice5(1); // practice 5&9 passed
    // practice8(1); // practice 7&8 passed
    practice10(1); // practice 10 passed
    cout << "\n=== All practice passed. 2022/2/22 ===\n";
    return 0;
}

