/*
 * @Author: codebug 
 * @Date: 2022-03-31 21:12:14 
 * @Last Modified by: codebug
 * @Last Modified time: 2022-03-31 23:49:36
 */

//虚函数(virtual) - 父类的虚函数可以在子类中被重写，即重新实现，但参数和返回值必须保持一致。
/**
 * (1)父类中的某些行为需要在子类中被更加具体地细化
 * (2)父类中的某些行为不可确定，必须在子类中实现
 * 
 * 某些类是抽象的，不是具体的，不可独立存在（父类中的某些行为不可确定，必须在更精确的子类中定义）
 * (1)纯虚函数：不实现，仅声明为纯虚函数，留待子类里重写定义
 * (2)含有纯虚函数的类叫*抽象类*，仅有纯虚函数的类叫*接口*
 */
#include <iostream>
using namespace std;

class Human{
public:
    virtual void say(){     //父类的虚函数可以在子类中被重写 (virtual)
        cout << "I'm human." << endl;
    }
};

class Student : public Human{
public:
    void say(){            //重写时，参数和返回值保持一致  (无virtual)
        cout << "I'm a student." << endl;
    }
};

class Shape{        //接口(很抽象)
public:
    virtual float getS() = 0;   //纯虚函数：不实现，仅声明为纯虚函数，使其 = 0
    virtual float getC() = 0;
};

class Circle : public Shape{
private:
    float radius;
public:
    Circle(float radius){
        this->radius = radius;
    }
    float getS() { return 3.14 * radius * radius; }  //留待子类里重写定义
    float getC() { return 2 * 3.14 * radius; }
};

int main(void){
    //Shape S;
    Circle c(2.f);
    cout << "c.S = " << c.getS() << endl;

    return 0;
}