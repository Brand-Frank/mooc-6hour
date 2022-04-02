#include <iostream>
using namespace std;

class A{
public:
    int n;
    A(int n) { this->n = n; }
};

class B{
public:
    int n1;
    int n2;
    A a;
    
    //n1(n1) - 类的数据成员(左边的形参)
    B(int n1, int n2, int n) : n1(n1), n2(n2), a(n) { }   //给构造函数传参(在B()声明之后，定义/实现之前，先把a的成员函数构造好)
    
    //或    n1和n2可以先定义再赋值
    B(int n1, int n2, int n) : a(n){
        this->n1 = n1;
        this->n2 = n2;
    }
};