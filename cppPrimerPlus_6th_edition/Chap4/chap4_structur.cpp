//
// Created by Moynstain_MBA on 2022/10/14.
//

#include "iostream"
#include "cstring"
struct inflatable{ /// declare a struct type
    char name[20];
    std::string name_str;
    float volume;
    double price;
};

int main(){
    using namespace std;
    inflatable guest = {
            "GG Gloria",
            "GG Gloria in String type",
            1.88,
            29.99
    };

    inflatable pal = {
            "Arthur Owch",
            "Arthur in String type",
            3.12,
            // 32.99
    };
    inflatable test_null;

    cout << "Expand your guest list with: " << guest.name << ", with in string type: " << guest.name_str << endl;
    cout << "The total price is: " << guest.price + pal.volume << endl;
    cout << "pal.price = " << pal.price << endl;
    cout << "test_nul.price" << test_null.price;

    return 0;
}
