/*
 * @Author: codebug 
 * @Date: 2022-04-01 15:53:37 
 * @Last Modified by: codebug
 * @Last Modified time: 2022-04-01 20:36:36
 */

//Ĭ�Ͽ������캯�� - �����Ѵ���ͬ������������¶�����˲����Ǹ�*�������*
/* Note: 
    ���û����ʽ���忽�����캯���������Ĭ��ӵ��һ��*ǳ����*���캯��
    ��ˣ��������ӵ�м����Դ���ǵð����Զ���һ��������캯�� 
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

    /*  ���û����ʽ���忽�����캯��������Զ�����һ��ǳ�������캯�� */
    // A(A& other) {       //A�Ŀ������캯��
    //     this->n = other.n;
    //     this->ptr = other.ptr;  //Note:ǳ����
    // }
    
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