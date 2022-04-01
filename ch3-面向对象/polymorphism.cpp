/*
 * @Author: codebug 
 * @Date: 2022-03-31 23:42:12 
 * @Last Modified by: codebug
 * @Last Modified time: 2022-03-31 23:58:05
 */

//多态(polymorphism)-同一对象在不同的场合中，被外界所关注的是不同的身份
/**
 * - 一个对象就是内存中的一个实体，他只能属于一个确定的类：最精确的类
 * - 它可能在不同处被视为不同身份，但它本质行为方式应与外界如何看待他无关
 * 需要保证一个对象执行其最本质身份的行为
 * 即： 虚函数重写 + 指针(指向子类对象的父类指针)
 */
#include <iostream>
using namespace std;

class Human{
public:
    virtual void say(){     //太宽泛了，需要子类重写 (virtual)
        cout << "I'm human." << endl;
    }
};

class Student : public Human{
public:
    virtual void say(){     //有点宽泛，需要子类重写 (virtual)
        cout << "I'm a student." << endl;
    }
};

class College : public Student{
public:
    void say(){
        cout << "I'm a college student." << endl;
    }
};

int main(void){
    College a;
    Human* p1 = (Human*)&a;     //指向子类对象的父类指针，本质是College类
    Student* p2 = (Student*)&a; //强制类型转换子类College对象为Student类
    College* p3 = &a;

    p1->say();  //通过指针调用的是对象本质子类的方法
    p2->say();
    p3->say();

    return 0;
}