//模板编程的目的
//下列函数问题：调用方确实减少了代码量，实现了代码复用，但实现方仍然冗余：一样的逻辑为三种类型各写一遍

//通过三个函数重载实现 (对不同类型变量进行自定义的拼接相加)
#include <iostream>
#include <string>
using namespace std;

string myAdd(int a, int b) { 
    return to_string(a) + to_string(b); //相同(1)
}

string myAdd(float a, float b) {    //函数重载1
    return to_string(a) + to_string(b); //相同(2)
}

string myAdd(double a, double b) {  //函数重载2
    return to_string(a) + to_string(b); //相同(3)
}

int main(void) {
    // 调用：
    cout << myAdd(111, 999) << endl;
    cout << myAdd(3.14f, 2.27f) << endl;
    cout << myAdd(3.1415926535, 2.2777777777) << endl;

    return 0;
}