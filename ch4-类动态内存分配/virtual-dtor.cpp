//虚析构函数 - 内存泄漏 VS 内存溢出
#include <iostream>
using namespace std;

class A {
public:
    char* pA;
    A() { pA = new char[100]; }
    virtual void func() { cout << "func in A\n"; }
    //~A() { delete[] pA; }   //正确方法：virtual ~A() {...}
    virtual ~A() { delete[] pA; }   //虚析构函数 - (解决内存泄漏)
};

class B : public A {
public:
    char* pB;
    B() { pB = new char[100]; }
    void func() { cout << "func in B\n"; }
    ~B() { delete[] pB; }
};

int main(void){
    A* ptr = (A*) new B;
    ptr->func();
    //delete ptr;     //ERROR：ptr的类型是A*，因此 ~B() 没被调用，导致内存泄露啦！
    delete ptr; //相当于~A()被~B()重写了,因此实际执行B::~B(),进而A::~A()也被调用(因析构顺序),不会内存泄露

    return 0;
}
