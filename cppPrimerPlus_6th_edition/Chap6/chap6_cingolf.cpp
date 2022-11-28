//
// Created by Moynstain_MBA on 2022/11/28.
//
#include "iostream"

using std::cin;
using std::cout;
using std::endl;

const int MAX = 5;

int main(){
    int golf[MAX];

    cout << "Enter scores of the golf game:\n";
    cout << "Maximum number of rounds is " << MAX << ".\n";
    cout << "<q to terminate>\n";

    int i;
    for (i = 0; i < MAX; i++){
        cout << "round #" << i + 1 << ": ";
        while (!(cin >> golf[i])){
            cin.clear();  /// reset input
//            if (cin.get() == 'q' || cin.get() == 'Q'){
//                break;
//            }
//            cout << "break cin.get() if branch.\n";
            while (cin.get() != '\n'){
                continue;
            }
            cout << "Enter a number: ";
        }
    }

    /// calculate scores
    double total = 0.0;
    for (i = 0; i < MAX; i++){
        total += golf[i];
    }

    cout << "\ntotal scores = " << total << endl;
    cout << "avg scores = " << total / sizeof(golf) * sizeof(golf[0]) << endl;

    return 0;
}
