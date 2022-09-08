//
// Created by Moynstain_MBA on 2022/8/28.
//

#include "iostream"
#include "cstring"
#include "sstream"
#include "fstream"
using std::cout;
using std::string;
using std::cin;
using std::endl;


struct struct_var_group{
    int a;
    double result;
};

struct student_group{
    std::string name;
    std::string gender;
    int age{};
};
string judgementCall(int age, string name, bool lovesCpp) {
    std::ostringstream formatter;
    formatter << name <<", age " << age;
    if(lovesCpp) formatter << ", rocks.";
    else formatter << " could be better";
    return formatter.str();
}


int main(){
    // struct_var_group var_group;
    // std::cout << var_group.a << std::endl << var_group.result;
    student_group student_jack;
    student_jack = {"Jack", "Male", 21};
    std::cout << student_jack.name << student_jack.gender << student_jack.age << std::endl;

    std::string line;
    std::cout << "write some words: \n";
    std::getline(std::cin, line);
    std::cout << line;


    string func_name = "Jas";
    cout << judgementCall(15, func_name, 1) << endl;

    return 0;
}