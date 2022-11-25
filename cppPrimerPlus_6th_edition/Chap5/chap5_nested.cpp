//
// Created by Moynstain_MBA on 2022/11/25.
//
#include "iostream"
#include "ostream"
const int Cities = 5;
const int Years = 4;
using std::cout;
using std::cin;
using std::endl;
int main(){
    const char * cities[Cities] = {
            "Gribble City",
            "Gribbletown",
            "New Gribble",
            "san Gribble",
            "Gribble Vista"
    };

    int maxtemps[Years][Cities] = {
            {96, 100, 87, 101, 105},
            {96, 98, 91, 107, 104},
            {97, 101, 93, 108, 107},
            {98, 103, 95, 109, 108}
    };

    cout << "Maximum temperature for 2008 - 2011\n\n";
    for (int city = 0; city < Cities; ++city){
        cout << cities[city] << ": \t";
        for (int year = 0; year < Years; ++year){
            cout << maxtemps[year][city] << "\t";
        }
        cout << endl;
    }
    return 0;
}
