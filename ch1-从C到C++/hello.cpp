/*
 * @Author: codebug 
 * @Date: 2022-03-21 20:41:39 
 * @Last Modified by: codebug
 * @Last Modified time: 2022-03-21 20:42:46
 */
#include <iostream>

int fun(int a, int b);

int main(void){
    int a = 10, b = 2, c;
    //cout是iostream库的std命名空间下的一个名为cout对象
    std::cout << "a*13 = " << a * 13 << std::endl;

    c = fun(a,b);
    std::cout << "c = " << a*b << std::endl;
    
    std::cout << "Hello World!" << std::endl;

    return 0;
}

int fun(int a, int b){
    return a*b;
}
