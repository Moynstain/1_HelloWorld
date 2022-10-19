//
// Created by Moynstain_MBA on 2022/10/17.
//

#include "iostream"
#include "cstring"

using namespace std;

int main(){
    char animal[20] = "bear";
    const char* bird = "wren";
    char* ps;

    cout << "animal = " << animal << endl;
    cout << "bird = " << bird << endl;
    cout << "&bird = " << &bird << endl;

    cout << "Enter a kind of animal: " << endl;
    cin >> animal;
    cin.get();

    ps = animal;
    cout << ps << "!\n";

    cout << "Before using strcpy(): " << endl;
    cout << animal << " at " << (int* )animal << endl;
    cout << ps << " at " << (int* )ps << endl;

    ps = new char [strlen(animal) + 1];
    strcpy(ps, animal);

    cout << "After using strcpy(): " << endl;
    cout << animal << " at " << (int* )animal << endl;
    cout << ps << " at " << (int* )ps << endl;
    cout << ps << " at &: " << &ps << endl;
    cout << "*animal" << " at " <<  *animal << endl;
    return 0;
}