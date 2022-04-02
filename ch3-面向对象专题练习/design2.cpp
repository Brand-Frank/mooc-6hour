//程序设计题(2)
//请设计并实现类A←B←C，要求支持统计各类的实时对象数量。
#include <iostream>
using namespace std;

class A{
public:
    static int cntA;
    A() { cntA++; }
    ~A() { cntA--; }
};
int A::cntA = 0;

class B : public A{
public:
    static int cntB;
    B() { cntB++; }
    ~B() { cntB--; }
};
int B::cntB = 0;

class C : public B{
public:
    static int cntC;
    C() { cntC++; }
    ~C() { cntC--; }
};
int C::cntC = 0;

int main(void){
    A a1, a2;
    cout << "cnt-A = " << A::cntA <<endl;

    B b1, b2;
    cout << "cnt-B = " << B::cntB <<endl;

    C c1, c2, c3;
    cout << "cnt-C = " << C::cntC <<endl;

    return 0;
}