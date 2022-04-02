//C++的动态内存分配
//定义一个对象和定义一个普通变量有何区别？ 
//• 普通变量：分配足够空间即可存放数据 
//• 对象：除了需要空间，还要构造 / 析构
//Note：申请所需大小的内存 -> 构造对象 -> 返回指针供使用 -> 析构对象 -> 释放空间
#include <iostream>
using namespace std;

class A {
public: 
    int n;
    A() { cout << "Ctor1" << endl; }
    A(int n) : n(n) { cout << "Ctor2" << endl; } 
    void func() { cout << "func called" << endl; }
    ~A() { cout << "Dtor" << endl; }
};

int main(void){
    A* p1 = new A;  //申请所需大小的内存 -> 构造对象 -> 返回指针供使用
    p1->func();
    delete p1;      //析构对象 -> 释放空间
    cout << endl;
    A* p2 = new A(10);
    p2->func();
    delete p2;
}