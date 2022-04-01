/*
 * @Author: codebug 
 * @Date: 2022-04-01 15:15:52 
 * @Last Modified by: codebug
 * @Last Modified time: 2022-04-01 15:30:06
 */

//多态(polymorphism) - 运行时多态(虚函数重写(override)+指针)
#include <iostream>
using namespace std;

class Shape{
public:
    virtual float getS() = 0;
    virtual float getC() = 0;
};

class Circle : public Shape {
private:
    float radius;
public:
    Circle(float radius){
        this->radius = radius;
    }
    float getS() { return 3.14*radius*radius; }
    float getC() { return 2*3.14*radius; }
};

class Rectangle : public Shape {
private:
    float a;
    float b;
public: 
    Rectangle(float a, float b){    //构造函数用于传参
        this->a = a;
        this->b = b;
    }

    float getS(){   //成员函数1
        return a * b;
    }
    float getC(){   //成员函数2
        return 2 * (a + b);
    }
};

void Display(Shape* ptr){      //父类指针
    //此处实现多态：通过父类指针调用子类重写的虚函数
    cout << "S = " << ptr->getS() << endl;
    cout << "C = " << ptr->getC() << endl;
}

int main(void){
    Circle c(3.5f);
    Rectangle r(3.f,4.f);

    Display(&c);    //子类重写：实际调用函数时传进来的是子类的对象(父类的虚函数在子类中被重写了)
    Display(&r);

    return 0;
}