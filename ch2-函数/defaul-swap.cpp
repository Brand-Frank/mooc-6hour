/*
 * @Author: codebug 
 * @Date: 2022-03-23 22:52:22 
 * @Last Modified by: codebug
 * @Last Modified time: 2022-03-23 23:05:14
 */
//引用传参：给一个已经有名字的变量取别名，所以不存在空引用
#include <iostream>
using namespace std;

/**
 * @brief 指针传参
 * 
 * @param p1 
 * @param p2 
 */
void swap_p(int *p1, int *p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

/**
 * @brief 引用传参，形参是实参的别名(操作形参就是操作实参)
 * 
 * @param a 
 * @param b 
 */
void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}

int main(void){
    int pm = 1, pn = 2;
    int m = 1, n = 2;
    swap_p(&pm, &pn);   //取地址
    cout << "pointer: pm = " << pm << "\tpn = " << pn << endl;

    swap(m, n);         //引用
    cout << "reference: m = " << m << "\tn = " << n << endl;

    return 0;
}