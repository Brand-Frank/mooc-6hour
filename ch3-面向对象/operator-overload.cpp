/*
 * @Author: codebug 
 * @Date: 2022-04-01 15:57:34 
 * @Last Modified by: codebug
 * @Last Modified time: 2022-04-01 16:34:59
 */

//���������
/**
 * ����������Ϊ������ �� cout << x �ȼ��ڵ���cout����ĳ�Ա����<<���ҽ�x��Ϊ<<�����Ĳ���
 * �����˺���Ϊʲô��Ҫ����������ػ����أ�
 * ������ printf(��%d��, n) �ÿ����� cout << n �ÿ�
 * ˼������һ����Vector��ʾֱ������ϵ�µ���������ΰ�����ѧ����ʵ��������������ļӷ���
 * 
 */

#include <iostream>
using namespace std;

class A{
public:
    int n;
    char *ptr;
    A(int n){
        this->n = n;
        ptr = (char*)malloc(100);
    }
    
    // A(A& other) {       //A�Ŀ������캯��
    //     this->n = other.n;
    //     this->ptr = other.ptr;  //Note:ǳ����
    // }

    A& operator = (A& other) {       //A�Ŀ������캯��
        this->n = other.n;
        this->ptr = other.ptr;  //Note:ǳ����
        return *this;   //����ǳ����A���� - ��������������ֵ
    }

    ~A(){
        free(ptr);
        cout << "�ɹ�����һ��A����" << endl;
    }
};

int main(void){
    A a1(1);    cout << a1.n << "\t" << a1.ptr << endl;     //1
    A a2(2);    cout << a2.n << "\t" << a2.ptr << endl;     //2
    A a3(3);    cout << a3.n << "\t" << a3.ptr << endl;     //3
    A a4(4);    cout << a4.n << "\t" << a4.ptr << endl;     //4
    a3 = a1;
    a4 = a3 = a2 = a1;

    cout << a1.n << "\t" << a1.ptr << endl;     //1
    cout << a2.n << "\t" << a2.ptr << endl;     //1
    cout << a3.n << "\t" << a3.ptr << endl;     //1
    cout << a4.n << "\t" << a4.ptr << endl;     //1

    return 0;
}