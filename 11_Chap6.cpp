//
// Created by Moynstain_MBA on 2022/3/3.
//
#include "iostream"
using namespace std;

// following if expression 2022/3/3
int test_if(int val){
    char ch;
    int spaces = 0;
    int total = 0;
    cin.get(ch);
    while (ch != '.'){
        if (ch == ' '){
            spaces++;
        }
        total++;
        cin.get(ch);
    }
    cout << spaces << " spaces, " << total << " total characters total in sentence.";
    return 0;
}

int test_if_else(int val){
    char ch;
    cout << "Type something, the system would repeat.\n";
    cin.get(ch);
    auto rand = random()%10;
    while (ch != '.'){
        if (ch == '\n'){
            cout << ch;
        }
        else{
            ch = ch + rand;
            cout << ch;
        }
        cin.get(ch);
    }
    cout << "\n--- system translate error detected ---\n";

    return 0;
}

void test_switch(){
    int choice;
    cout << "OK, finished.";

}

int main(){
    // test_if(1); passed 2022/3/3
    test_if_else(1);

    return 0;
}

