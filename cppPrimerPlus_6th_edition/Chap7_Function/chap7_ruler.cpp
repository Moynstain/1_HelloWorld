//
// Created by Moynstain_MBA on 2022/11/30.
//

#include "iostream"
using std::cin;
using std::cout;
using std::endl;

const int Len = 66;
const int Divs = 6;

/// func prototype
void subdivide(char arr[], int low, int high, int level);

/// main func
int main(){
    char ruler[Len];
    int i;
    for (i = 0; i < Len; i++){
        ruler[i] = ' ';
    }
    ruler[Len - 1] = '\0';

    int max = Len - 2;
    int min = 0;
    ruler[min] = ruler[max] = '|';
    cout << ruler << endl;

    for (i = 1; i <= Divs; i++){
        subdivide(ruler, min, max, i);
        cout << ruler << endl;
        for (int j = 1; j < Len - 2; j++){
            ruler[j] = ' ';
        }
    }
    return 0;
}

/// funcs
void subdivide(char arr[], int low, int high, int level){
    if (level == 0){
        return;
    }
    int mid = (low + high) / 2;
    arr[mid] = '|';
    subdivide(arr, low, mid, level - 1);
    subdivide(arr, mid, high, level - 1);
};