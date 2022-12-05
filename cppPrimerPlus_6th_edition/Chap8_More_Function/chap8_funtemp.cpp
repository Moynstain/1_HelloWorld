//
// Created by Moynstain_MBA on 2022/12/2.
//

#include "iostream"

using std::cin, std::cout, std::endl;
const int Lim = 8;

/// struct
struct job{
    char name[20];
    double salary;
    int floor;
};

/// func prototype
template <typename T>
void swap(T & a, T & b);

template <typename T>
void swap(T * a, T * b, int n);

void show(int a[]);

// explicit func
template <> void swap<job>(job &j1, job &j2);
void show(job &j);


/// main func
int main(){
    int i = 10;
    int j = 20;
    cout << "i = " << i << ", j = " << j << endl;
    cout << "Using swap(i, j): \n";
    swap(i, j);
    cout << "Now i = " << i << ", j = " << j << endl << endl;

    double x = 24.5;
    double y = 98.2;
    cout << "x = " << x << ", y = " << y << endl;
    cout << "Using swap(x, y): \n";
    swap(x, y);
    cout << "Now x = " << x << ", y = " << y << endl << endl;

    int d1[Lim] = {0, 7, 3, 2, 1, 3, 4, 5};
    int d2[Lim] = {3, 6, 7, 1, 6, 7, 0, 1};
    show(d1);
    show(d2);
    swap(d1, d2, Lim);
    cout << "using swap: \n";
    show(d1);
    show(d2);
    cout << endl;

    job sue = {"job_sue name", 73000.22, 7};
    job sidney = {"job_sidney name", 12300.22, 999};
    cout << "before swap: \n";
    show(sue);
    show(sidney);
    swap(sue, sidney);
    cout << "after swap: \n";
    show(sue);
    show(sidney);

    return 0;
}

/// func
template <typename T>
void swap(T & a, T & b){
    T temp;
    temp = a;
    a = b;
    b = temp;
}

template <typename T>
void swap(T a[], T b[], int n){
    T temp;
    for (int i = 0; i < n; i++){
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

void show(int a[]){
    cout << a[0] << a[1] << "/";
    cout << a[2] << a[3] << "/";
    for (int i  = 4; i < Lim; i++){
        cout << a[i];
    }
    cout << endl;
}

template <> void swap<job>(job &j1, job &j2){
    double t1;
    int t2;
    t1 = j1.salary;
    j1.salary = j2.salary;
    j2.salary = t1;

    t2 = j1.floor;
    j1.floor = j2.floor;
    j2.floor = t2;
}

void show(job &j){
    // cout << "showing job: \n";
    cout << j.name << ", " << j.salary << ", " << j.floor << endl;
}