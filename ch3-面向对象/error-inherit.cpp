/*
 * @Author: codebug 
 * @Date: 2022-03-31 20:47:27 
 * @Last Modified by: codebug
 * @Last Modified time: 2022-03-31 20:58:55
 */

//继承(inherit) - 继承(子类继承自父类) | 派生(父类/基类派生出子类)
/**
 * 继承方式：决定父类成员在子类中的访问控制属性
 *  - 父类的private成员不会被子类继承
 *  - 公有(public)继承不改变控制属性
 *  - 保护(protect)继承和私有(private)继承指示父类成员在子类中的相应控制属性
 */
#include <iostream>
using namespace std;

class A{
private:
    int pri_A;
protected:
    int pro_A;
public:
    int pub_A;
    A(){
        pub_A = 1;
    }
    void funcA(){
        cout << "funcA()" << endl;
    }
};

class B : public A{     //Note：B继承A的属性和方法-(公有继承)
private:
    int pri_B;
protected:
    int pro_B;
public:
    int pub_B;
    B(){
        pub_B = 2;
    }
    void funcB(){
        cout << "funcB() - from A" << endl;
    }
};

class C : public B{     //Note：C继承B的属性和方法-(公有继承)
private:
    int pri_C;
protected:
    int pro_C;
public:
    int pub_C;
    C(){
        pub_C = 3;
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

    cout << "pub_A = " << c.pub_A << endl << "pub_B = " << c.pub_B << endl << "pub_C = " << c.pub_C << endl;

    //父类的私有成员不能继承
    cout << "pri_A = " << c.pri_A << endl << "pri_B = " << c.pri_B << endl << "pri_C = " << c.pri_C << endl;

    //父类保护成员即成为相应的访问控制属性
    cout << "pro_A = " << c.pro_A << endl << "pro_B = " << c.pro_B << endl << "pro_C = " << c.pro_C << endl;

    return 0;
}