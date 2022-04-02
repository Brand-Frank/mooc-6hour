/*
 * @Author: codebug 
 * @Date: 2022-04-01 16:23:10 
 * @Last Modified by: codebug
 * @Last Modified time: 2022-04-01 16:32:04
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
        //this->ptr = other.ptr;  //Note:ǳ����
        memcpy(this->ptr, other.ptr, 100);
        return *this;   //����ǳ����A����
    }

    ~A(){
        free(ptr);
        cout << "�ɹ�����һ��A����" << endl;
    }
};

int main(void){
    A a1(1);
    A a2(2);
    A a3(3);
    A a4(4);
    a3 = a1;    //=���������
    a4 = a3 = a2 = a1;

    return 0;
}