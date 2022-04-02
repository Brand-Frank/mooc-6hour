/*
 * @Author: codebug 
 * @Date: 2022-04-01 15:41:54 
 * @Last Modified by: codebug
 * @Last Modified time: 2022-04-01 15:58:26
 */

//�������캯�� - �����Ѵ���ͬ������������¶�����˲����Ǹ�*�������*
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

    A(A& other) {       //A�Ŀ������캯��
        this->n = other.n;
        this->ptr = (char*)malloc(100);
        memcpy(this->ptr, other.ptr, 100);  //Note:���,�������ԴҲ������һ��
    }
    
    ~A(){
        free(ptr);
        cout << "�ɹ�����һ��A����" << endl;
    }
};

int main(void){
    A a1(10);
    A a2(a1);   //�����ǳ��������һ��a1.ptr�ᱻ������֮���ptr���ܱ���������Ϊ�õĶ���ͬһ���ڴ�
    A a3(a1);  // �ȼ���A a3 = a1;
    
    return 0;
}