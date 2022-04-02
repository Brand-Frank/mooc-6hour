// 模板函数的实例化

/**
 * 用模板函数对不同类型变量进行自定义的拼接相加
 * - template 关键字：表明接下来定义一个模板
 * - typename 关键字：表明该模板参数是一个类型名
 * T1、T2: 是两个类型形式参数，是类型占位符
 * 于是在myAdd函数中就可以用T1和T2指代数据类型，编写代码逻辑
 */

#include <iostream>
#include <string>
using namespace std;

template<typename T1, typename T2>
string myAdd(T1 a, T2 b){
    return to_string(a) + to_string(b);
}

int main(void) {
    // 模板函数的 实例化：发生在编译时，由编译器完成
    cout << myAdd<int, int>(123, 456) << endl;
    cout << myAdd<float, float>(3.141f, 5926.f) << endl;
    cout << myAdd<int, float>(8, 8.88f) << endl;

    //to_string函数不能用在string对象上，因此这个问题会在实例化时被发现并报编译错误
    //cout << myAdd<string, float>("string", 3.14f) << endl; //ERROR!

    //模板类型推断
    cout << myAdd(23, 45) << endl;

    return 0;
}