/**
 * @file ctor-dtor-order.cpp
 * @date 2022-04-01 18:04
 * @author codebug (zhang_classmate@qq.com)
 * @brief 构造/析构顺序
 * @note 构造函数 调用顺序：父 -> 子    析构函数 调用顺序：子 -> 父
 * //Note: 构造对象时，先构造父类，再构造子类； | 析构时，先析构子类，再析构父类。
 */

#include <iostream>
using namespace std;

class A{
public:
    A() { cout << "构造A" << endl; }
    ~A() { cout << "析构A" << endl; }
};

class B : public A {
public:
    B() { cout << "构造B" << endl; }
    ~B() { cout << "析构B" << endl; }
};

class C : public B {
public:
    C() { cout << "构造C" << endl; }
    ~C() { cout << "析构C" << endl; }
};

int main(void){
    C c;

    return 0;
}
//构造A -> 构造B -> 构造C -> 析构C -> 析构B -> 析构A