/*
 * @Author: codebug 
 * @Date: 2022-03-23 22:42:33 
 * @Last Modified by: codebug
 * @Last Modified time: 2022-03-23 22:51:59
 */

//引用传参：给一个已经有名字的变量取别名，所以不存在空引用
/* 解决的问题：避免按值传参发生的拷贝，实现了原地改动调用方传入参数的功能 */
#include <iostream>
using namespace std;

int main(void){
    int a = 10;
    int &b = a, &c = b; //取a的别名为b，b的别名为c;

    cout << "a = " << a << "\t&a = " << &a <<endl;
    cout << "b = " << b << "\t&b = " << &b <<endl;
    cout << "c = " << c << "\t&c = " << &c <<endl;

    return 0;
}

/**
 * a = 10  &a = 0x78bb9ff6fc
 * b = 10  &b = 0x78bb9ff6fc
 * c = 10  &c = 0x78bb9ff6fc 
 */