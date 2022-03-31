/*
 * @Author: codebug 
 * @Date: 2022-03-31 18:55:03 
 * @Last Modified by: codebug
 * @Last Modified time: 2022-03-31 19:11:10
 */
//���캯��(construcor)����������(destructor)��������������Ա����
/**
 * ���죺ʵ��������ʱ���ڷ���õ��Ŀռ��Ϲ������(���ʼ����Ա������������Դ��
 *  - Ĭ�Ϲ��캯����û�в����Ĺ��캯��
 *  - �в������캯�����в����Ĺ��캯��
 * �����������������ڽ���ʱ�����տռ�ǰ����ɶ����������(���ͷ���Դ��)
 * @note ���캯������������û�з���ֵ
 * @note ��������û�в���
 */
#include <iostream>
using namespace std;

class A{
public:
    int n;
    char* data = nullptr;

    A(int n){   //�вι��캯��
        this->n = n;
        data = (char*)malloc(100);  //������Դ
    }

    ~A(){       //��������
        free(data); //�ͷ���Դ
    };
};

int main(void){
    A a1(10);
    cout << "a1.n = " << a1.n << endl;
    cout << "a1.data = " << a1.data << endl;
    //cout << "a1.~A() = " << a1.~A() << endl;  //error
    a1.~A();
    return 0;
}