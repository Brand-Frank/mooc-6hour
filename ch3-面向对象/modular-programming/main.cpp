/*
 * @Author: codebug 
 * @Date: 2022-04-01 16:31:04 
 * @Last Modified by: codebug
 * @Last Modified time: 2022-04-01 16:59:11
 */

//类的模块化编程
/**
 * 在C语言中，为了代码的封装，我们会将函数的声明与定义分开
 * 函数声明在.h头文件中，定义在.c源代码文件中，将.c编译为二进制文件后同.h一起交付给使用方
 * 这样使用方编写代码时只看见声明，不会知道具体实现方式
 * //Note:C++中编写类也可以使用相同的模块化方式 | 将声明放在 .h 文件中 | 实现放在 .cpp 文件中
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