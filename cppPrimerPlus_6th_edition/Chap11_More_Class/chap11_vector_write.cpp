//
// Created by Moynstain_MBA on 2022/12/15.
//

#include "iostream"
#include "fstream"
using std::cin;
using std::cout;
using std::endl;

int main(){
    std::string file_data;
    std::ofstream outfile;
    outfile.open("the_walk.txt");

    cout << "Enter your name: \n";
    getline(cin, file_data);
    outfile << file_data << endl;

    cout << "Enter your age:\n";
    getline(cin, file_data);
    outfile << file_data << endl;

    outfile.close();

    return 0;
}