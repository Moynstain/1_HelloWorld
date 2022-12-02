//
// Created by Moynstain_MBA on 2022/12/1.
//

#include "iostream"
#include "fstream"
#include "cstdlib"

using std::cin;
using std::cout;
using std::endl;

const int LIMIT = 5;

/// func prototype
void file_it(std::ostream & os, double fo, const double fe[], int n);

/// main func
int main(){
    std::ofstream fout;
    const char * fn = "epdata.txt";
    fout.open(fn);

    if (!fout.is_open()){
        cout << "Can't open file " << fn << ".\n";
        exit(EXIT_FAILURE);
    }

    double objective;
    cout << "Enter the focal length of telescope in mm: \n";
    cin >> objective;
    double eps[LIMIT];
    cout << "Enter the focal length of " << LIMIT << " eyepieces:\n";

    for (int i = 0; i < LIMIT; i++){
        cout << "Eyepiece #" << i+1 << ": ";
        cin >> eps[i];
    }

    file_it(fout, objective, eps, LIMIT);
    file_it(cout, objective, eps, LIMIT);
    cout << "Done.\n";

    return 0;
}

/// funcs
void file_it(std::ostream & os, double fo, const double fe[], int n){
    std::ios_base::fmtflags initial;
    initial = os.setf(std::ios_base::fixed);

    os.precision(0);
    os << "Focal length of objective: " << fo << " mm\n";
    os.setf(std::ios::showpoint);
    os.precision(1);
    os.width(12);
    os << "f.l. eyepiece";

    os.width(15);
    os << "magnification: " << endl;

    for (int i = 0; i < n; i++){
        os.width(12);
        os << fe[i];
        os.width(15);
        os << int (fo / fe[i] + 0.5) << endl;
    }
    os.setf(initial);
}