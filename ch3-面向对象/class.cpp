/*
 * @Author: codebug 
 * @Date: 2022-03-31 18:24:58 
 * @Last Modified by: codebug
 * @Last Modified time: 2022-04-01 15:20:06
 */
//类(class)
#include <iostream>
#include <string>
using namespace std;

/**
 * @brief 圆形
 * @param radius 半径
 */
class Circle{
public:     //访问控制修饰符:
    float radius;   //成员变量

    //实例化一个对象时需要对其进行一些初始化工作(初始化工作是自定义的)
    Circle(float radius){   //构造函数(函数名和类名一样)
        this->radius = radius;  //this表明指向当前对象的指针，(初始化工作：radius的值赋值给当前的对象)
    }
    
    float getS(){   //成员函数1
        return 3.14 * radius * radius;
    }
    float getC(){   //成员函数2
        return 2 * 3.14 * radius;
    }
};

/**
 * @brief 矩形
 * @param a 长
 * @param b 宽
 * @note 两个不同类的成员函数可以相同
 */
class Rectangle{
public:
    float a;
    float b;
    
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

int main(void){
    //实例化对象
    Circle c1(2.5f), c2(6.f);
    Rectangle r1(10.f, 20.f), r2(1.5f, 2.5f);

    //访问对象的成员
    cout << "c1的半径 = " << c1.radius << endl;
    cout << "c1的面积 = " << c1.getS() << endl;
    cout << "c2的周长 = " << c2.getC() << endl;
    cout << "r1的面积 = " << r1.getS() << endl;

    return 0;
}