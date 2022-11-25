//
// Created by Moynstain_MBA on 2022/10/14.
//

#include "iostream"

int main(){
    using namespace std;
    int donuts = 6;
    double cups = 4.5;

    cout << "donuts value = " << donuts << endl;
    cout << "donuts address = " << &donuts << endl;
    cout << strcmp("char", "char") << endl;

    /// test EOF
    char ch;

    cout << "Type a char: \n";
    ch = cin.get();
    cout << ch;
    while (ch != EOF){
        cout << "test func cout.put(): \n";
        cout.put(ch);
        cout << endl;
        ch = cin.get();
        cout << "test cout: \n";
        cout << ch << endl;


    }
    return 0;
}