//���������� - �ڴ�й© VS �ڴ����
#include <iostream>
using namespace std;

class A {
public:
    char* pA;
    A() { pA = new char[100]; }
    virtual void func() { cout << "func in A\n"; }
    //~A() { delete[] pA; }   //��ȷ������virtual ~A() {...}
    virtual ~A() { delete[] pA; }
};

class B : public A {
public:
    char* pB;
    B() { pB = new char[100]; }
    void func() { cout << "func in B\n"; }
    ~B() { delete[] pB; }
};

int main(void) {
    A* ptr = (A*) new B;
    ptr->func();
    //delete ptr;     //ERROR��ptr��������A*����� ~B() û�����ã������ڴ�й¶����
    delete ptr; //�൱��~A()��~B()��д��,���ʵ��ִ��B::~B(),����A::~A()Ҳ������(������˳��),�����ڴ�й¶

    return 0;
}
