/*
 * @Author: codebug
 * @Date: 2022-03-23 22:00:22
 * @Last Modified by: codebug
 * @Last Modified time: 2022-03-23 22:14:54
 */

 //����ֵ���κ�ָ�봫��
#include <iostream>
using namespace std;

void swap(int* a, int* b);

int main(void) {
    int m = 10, n = 5;
    int* a = &m, * b = &n;

    swap(m, n);
    cout << "m = " << m << "\tn = " << n << endl;

    return 0;
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}