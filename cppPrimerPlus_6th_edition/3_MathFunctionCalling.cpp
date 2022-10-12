//
// Created by Moynstain_MBA on 2022/2/10.
// 使用c++函数调用

#include "iostream"
#include "cmath"
using namespace std;

void simon(int a, int b){
    using namespace std;
    cout << "Simon原地蹦了 " << a << " 尺高，并继续翻了 " << b << " 个跟头。" << endl;
}

double jack(double a){
    using namespace std;
    double b = sqrt(a);
    return b;
}

int main(){
    double area;
    cout << "输入需要计算开根号的参数（double）";
    cin >> area;
    double side;
    side = sqrt(area);
    cout << "所计算参数 "
         << area
         << " 的开根号结果为："
         << side
         << endl;
    simon(area,side);
    cout << jack(area) << endl;
    cout << "Jack认为，" << area << " 的开根号结果为" << jack(area) << endl;
    return 0;
}

