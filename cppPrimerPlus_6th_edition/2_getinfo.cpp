//
// Created by Moynstain_MBA on 2022/2/10.
// 测试cin语句的输入数据功能
#include <iostream>
using namespace std;

int main(){
    int carrots;
    cout << "输入carrot数量（int）" << endl;
    cin >> carrots;
    cout << "carrot增加2，因此一共有：";
    carrots = carrots + 2;
    cout << carrots
         << " 个carrots";
}
