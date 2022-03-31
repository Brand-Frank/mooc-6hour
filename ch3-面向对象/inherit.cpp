/*
 * @Author: codebug 
 * @Date: 2022-03-31 20:35:14 
 * @Last Modified by: codebug
 * @Last Modified time: 2022-03-31 21:11:54
 */

//继承(inherit) - 继承(子类继承自父类) | 派生(父类/基类派生出子类)
#include <iostream>
using namespace std;

class A{
public:
    int nA;
    A(){
        nA = 1;
    }
    void funcA(){
        cout << "funcA()" << endl;
    }
};

class B : public A{     //Note：B继承A的属性和方法-(公有继承)
public:
    int nB;
    B(){
        nB = 2;
    }
    void funcB(){
        cout << "funcB() - from A" << endl;
    }
};

class C : public B{     //Note：C继承B的属性和方法-(公有继承)
public:
    int nC;
    C(){
        nC = 3;
    }
    void funcC(){
        cout << "funcC() - from B" << endl;
    }
};

int main(void){
    C c;    //c同时拥有A/B/C的属性和方法

    c.funcA();
    c.funcB();
    c.funcC();
    cout << "nA = " << c.nA << endl << "nB = " << c.nB << endl << "nC = " << c.nC << endl;

    return 0;
}