/*
 * @Author: codebug 
 * @Date: 2022-04-01 16:31:04 
 * @Last Modified by: codebug
 * @Last Modified time: 2022-04-01 16:59:11
 */

//���ģ�黯���
/**
 * ��C�����У�Ϊ�˴���ķ�װ�����ǻὫ�����������붨��ֿ�
 * ����������.hͷ�ļ��У�������.cԴ�����ļ��У���.c����Ϊ�������ļ���ͬ.hһ�𽻸���ʹ�÷�
 * ����ʹ�÷���д����ʱֻ��������������֪������ʵ�ַ�ʽ
 * //Note:C++�б�д��Ҳ����ʹ����ͬ��ģ�黯��ʽ | ���������� .h �ļ��� | ʵ�ַ��� .cpp �ļ���
 * //CMD: g++ main.cpp myclass.cpp myclass.h -o main
 */
#include <iostream>
#include "myclass.h"
using namespace std;

int main(void){
    Myclass a(5);
    cout << a.get_n() << endl;

    a.set_n(24);
    cout << a.get_n() << endl;

    return 0;
}