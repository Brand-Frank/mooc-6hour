/**
 * @file ctor-dtor-order.cpp
 * @date 2022-04-01 18:04
 * @author codebug (zhang_classmate@qq.com)
 * @brief ����/����˳��
 * @note ���캯�� ����˳�򣺸� -> ��    �������� ����˳���� -> ��
 * //Note: �������ʱ���ȹ��츸�࣬�ٹ������ࣻ | ����ʱ�����������࣬���������ࡣ
 */

#include <iostream>
using namespace std;

class A{
public:
    A() { cout << "����A" << endl; }
    ~A() { cout << "����A" << endl; }
};

class B : public A {
public:
    B() { cout << "����B" << endl; }
    ~B() { cout << "����B" << endl; }
};

class C : public B {
public:
    C() { cout << "����C" << endl; }
    ~C() { cout << "����C" << endl; }
};

int main(void){
    C c;

    return 0;
}
//����A -> ����B -> ����C -> ����C -> ����B -> ����A