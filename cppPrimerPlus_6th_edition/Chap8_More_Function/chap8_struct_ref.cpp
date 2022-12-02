//
// Created by Moynstain_MBA on 2022/12/1.
//

#include "iostream"
#include "string"

using std::cin;
using std::cout;
using std::endl;

/// struct prototype
struct free_throws{
    std::string name;
    int made;
    int attempts;
    float percent;
};

/// funcs prototype
void display(const free_throws & ft);
void set_pc(free_throws & ft);
free_throws & accumulate(free_throws & target, const free_throws & source);

/// main func
int main(){
    // partial initialization
    free_throws one = {"ft one", 13, 14};
    free_throws two = {"ft two", 10, 16};
    free_throws three = {"ft three", 7, 9};
    free_throws four = {"ft four", 5, 9};
    free_throws five = {"ft five", 6, 14};
    free_throws team = {"ft team", 0, 0};

    // no initialization
    free_throws dup;

    set_pc(one);
    cout << one.percent << endl;
    display(one);

    accumulate(team, one);
    display(team);

    /// use return value as argument
    display(accumulate(team, two));
    accumulate(accumulate(team, three), four);
    display(team);

    /// use return value in assignment
    dup = accumulate(team, five);
    cout << "\nDisplaying team:\n";
    display(team);
    cout << "\nDisplaying dup:\n";
    display(dup);

    /// ill-advised assignment
    set_pc(four);
    accumulate(dup, five) = four;
    cout << "\nDisplaying ill-advised dup:\n";
    display(dup);

    return 0;
}

/// funcs
void display(const free_throws & ft){
    cout << "Name: " << ft.name << endl;
    cout << "  Made: " << ft.made << "\t";
    cout << "Attempts: " << ft.attempts << "\t";
    cout << "Percent: " << ft.percent << endl;
}

void set_pc(free_throws & ft){
    if (ft.attempts != 0){
        ft.percent = 100.0f * float(ft.made) / float(ft.attempts);
    } else{
        ft.percent = 0;
    }
}

free_throws & accumulate(free_throws & target, const free_throws & source){
    target.attempts += source.attempts;
    target.made += source.made;
    set_pc(target);
    return target;
}