/*
 * @Author: codebug 
 * @Date: 2022-03-31 17:15:01 
 * @Last Modified by: codebug
 * @Last Modified time: 2022-03-31 19:16:11
 */
//内联函数(inline)-额外开销
/*
(1)函数的目的：将重复发生的流程统一起来，实现代码复用和解耦
        但是，如果某个函数的功能十分简单，又被反复调用，额外开销很大
(2)内联函数：编译器在编译时将函数直接在函数调用处展开，避免函数调用行为的额外开销(inline)
(3)Note:inline只是建议，不一定会被内联，由编译器决定是否采纳
TODO:
*/
#include <iostream>
#include <string>
using namespace std;

inline int getMax(int a, int b, int c){
    return a > b ? (a>c?a:c) : (b>c?b:c);
}

int main(void){
    int a, b, c;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;

    cout << "max(" << a << ", " << b << ", " << c << ") = " << getMax(a,b,c) << endl;

    return 0;
}