//
// Created by Moynstain_MBA on 2022/11/28.
//
#include "iostream"
using std::cin;
using std::cout;
using std::endl;

/// function prototype
void showmenu();
void report();
void comfort();


int main(){
    showmenu();
    int choice;
    cin >> choice;
    while (choice != 5){
        switch (choice) {
            case 1:
                cout << "No data alarm.\n";
                break;
            case 2:
                report();
                break;
            case 3:
                cout << "The boss was in jail all day.\n";
                break;
            case 4:
                comfort();
                break;
            default:
                cout << "INVALID choice!\n";
        }
        showmenu();
        cin >> choice;
    }
    cout << "Bye!\n";
    return 0;
}

void showmenu(){
    cout << "Enter 1, 2, 3, 4 or 5 to choose:\n";
    cout << "1. alarm        2. report\n"
            "3. alibi        4. comfort\n"
            "5. quit\n";
}

void report(){
    cout << "Some business report data presented ......\n";\
}

void comfort(){
    cout << "Some compliment sentences presented ......\n";
}