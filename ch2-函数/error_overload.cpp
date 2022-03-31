/*
 * @Author: codebug 
 * @Date: 2022-03-31 17:03:26 
 * @Last Modified by: codebug
 * @Last Modified time: 2022-03-31 17:12:56
 */
//避免重载歧义
/*
(1)overload和返回值无关。-遇到函数重载时，不需要看返回值。(重载是针对参数列表的！)
(2)声明时：a.函数名相同；b.参数列表相同。
(3)调用时，不产生匹配歧义。
*/
#include <iostream>
#include <string>
using namespace std;

int func(int a, int b){
    return a+b;
}

int func(int&a ,int &b){    //引用传参
    return a+b;
}

int func(int a, int b, int c = 2){  //带有默认参数
    return a+b+c;
}

string func(int a, int b){      //返回值类型不同
    return to_string(a)+to_string(b);
}

int main(void){
    int m = 10, n = 5;
    cout << "func(m,n) = " << func(m,n) << endl;
    return 0;
}
