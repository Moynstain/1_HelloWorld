//
// Created by Moynstain_MBA on 2022/2/11.
//

#include "iostream"
using namespace std;

int main(){
    cout << "\aOperation \"HyperHype\" is now activated!\n";
    cout << "Enter your agent code:______23_\b\b\b\b\b\b\b";
    long code;
    code = 12345;
    //cin >> code;
    cout << "\aYou entered " << code << "...\n";

    int a1 = 042;
    int a2 = 42;
    cout << "a1 = " << a1 << endl;
    cout << "a2 = " << a2 << endl;

    cout.setf(ios_base::fixed, ios_base::floatfield); // fixed point
    float tub = 10.0 / 3.0;
    double mint = 10.0 / 3.0;

    /* const限定符
     * 定义常量并赋值，该赋值后续不可修改 */
    const int variables_example = 5;

    // float类型变量的精度问题
    // float 7位有效
    // double 14位有效
    float a = 2.34E2 + 2.03f;
    cout << "a = " << a << endl;

    // C++算数运算符
    /* % 求模，仅可对整数进行操作
     * */

    const int codex = 66;
    const int x = 66;
    char c3 = {codex};
    char c4 = {x};
    // x = 666;
    char c5 = x;
    int c6 = x;
    cout << "c3: " << c3 << endl;
    cout << "c4: " << c4 << endl;
    cout << "c5: " << c5 << endl;
    cout << "c6: " << c6 << endl;
}

