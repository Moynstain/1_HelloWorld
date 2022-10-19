//
// Created by Moynstain_MBA on 2022/10/18.
//

#include "iostream"
#include "cstring"

using namespace std;

char *getname_ptr();
char getname();

int main(){
    char* name_ptr = getname_ptr();
    char name = getname();
    cout << name_ptr << " at " << &name_ptr << endl;
    cout << name << " at " << &name << endl;
    delete [] name_ptr;

    name_ptr = getname_ptr();
    cout << name_ptr << " at " << (int* )name_ptr << endl;


    return 0;
}


char *getname_ptr(){
    char temp[80];
    cout << "Func: getname_ptr\n";
    cout << "Enter your last name: \n";
    cin >> temp;
    cin.get();
    char *pn = new char[strlen(temp) + 1];
    strcpy(pn, temp);

    return pn;
}

char getname(){
    char temp[80];
    cout << "Func: getname\n";
    cout << "Enter your last name: \n";
    cin >> temp;
    cin.get();
    char* pn = new char[strlen(temp) + 1];
    strcpy(pn, temp);

    return *pn;
}
