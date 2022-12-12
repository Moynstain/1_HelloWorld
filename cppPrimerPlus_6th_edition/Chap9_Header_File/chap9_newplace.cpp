//
// Created by Moynstain_MBA on 2022/12/7.
//

#include "iostream"
#include "new"

using std::cin;
using std::cout;
using std::endl;

const int BUFFER = 512;
const int N = 5;
char buffer[BUFFER];

int main(){
    double * pd1, * pd2;
    int i;

    cout << "Calling new and placement new:\n";

    pd1 = new double[N];
    pd2 = new (buffer) double[N]; /// place pd2 in buffer[BUFFER]

    for (i = 0; i < N; i++){
        pd2[i] = pd1[i] = 1000 + 20.0 * i;
    }
    cout << "Memory address: \n" << " heap: " << pd1 << endl;


    return 0;
}