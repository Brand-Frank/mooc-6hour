/*
 * @Author: codebug 
 * @Date: 2022-03-31 18:24:58 
 * @Last Modified by: codebug
 * @Last Modified time: 2022-04-01 15:20:06
 */
//��(class)
#include <iostream>
#include <string>
using namespace std;

/**
 * @brief Բ��
 * @param radius �뾶
 */
class Circle{
public:     //���ʿ������η�:
    float radius;   //��Ա����

    //ʵ����һ������ʱ��Ҫ�������һЩ��ʼ������(��ʼ���������Զ����)
    Circle(float radius){   //���캯��(������������һ��)
        this->radius = radius;  //this����ָ��ǰ�����ָ�룬(��ʼ��������radius��ֵ��ֵ����ǰ�Ķ���)
    }
    
    float getS(){   //��Ա����1
        return 3.14 * radius * radius;
    }
    float getC(){   //��Ա����2
        return 2 * 3.14 * radius;
    }
};

/**
 * @brief ����
 * @param a ��
 * @param b ��
 * @note ������ͬ��ĳ�Ա����������ͬ
 */
class Rectangle{
public:
    float a;
    float b;
    
    Rectangle(float a, float b){    //���캯�����ڴ���
        this->a = a;
        this->b = b;
    }

    float getS(){   //��Ա����1
        return a * b;
    }
    float getC(){   //��Ա����2
        return 2 * (a + b);
    }
};

int main(void){
    //ʵ��������
    Circle c1(2.5f), c2(6.f);
    Rectangle r1(10.f, 20.f), r2(1.5f, 2.5f);

    //���ʶ���ĳ�Ա
    cout << "c1�İ뾶 = " << c1.radius << endl;
    cout << "c1����� = " << c1.getS() << endl;
    cout << "c2���ܳ� = " << c2.getC() << endl;
    cout << "r1����� = " << r1.getS() << endl;

    return 0;
}