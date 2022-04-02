//多继承与菱形继承 | 友元函数 | 虚函数表
/**
 * 
 * 
 */

#include <iostream>
using namespace std;

//---- 多继承 ----
// - C++允许多继承：一个子类可以继承自多个父类
// - 相当于分别按照指定的继承方式获得这些父类的成员
class A1 {};
class A2 {};
class A3 {};
class B : public A1, private A2, protected A3 {};  //一个子类可以继承自多个父类

//---- 菱形继承 ----
//在多继承时有可能出现此情况：多个父类还有它们的共同父类，会出现//Note:父类成员多个副本问题
//Note:解决方案：虚继承
class A {};
class B1 : public A {};
class B2 : public A {};
class C : public B1, public B2 {};

//---- 友元函数 ----
//友元函数虽然需要通过friend关键字在 类内进行声明 ，但并 //Note不是类的成员函数！
//类的友元函数可以直接访问该类的private和protected成员
class D { 
private:
    int n;
public:
    friend void print_n(D &a);  //需要通过friend关键字在 类内 进行声明
    D(int n) :n(n) {} 
};

void print_n(D& a) {    //不是类的成员函数
    cout << a.n << "\n";    //可以直接访问该类的private和protected成员
}

//---- 虚函数表 ----
//[虚函数表](img\虚函数表.png)
/*
 * 每个对象存有一张虚函数表，记录了其所有虚函数指针
 * 当子类重写父类的虚函数时，用子类重写的版本覆盖父类原有的虚函数指针
 * 因此通过指针调用时会使用最新重写的那个版本
**/