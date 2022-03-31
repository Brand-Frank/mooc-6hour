/*
 * @Author: codebug 
 * @Date: 2022-03-31 16:37:48 
 * @Last Modified by: codebug
 * @Last Modified time: 2022-03-31 17:13:12
 */
//函数重载(overload)-允许多个同名函数存在，分别处理不同类型/数量的参数。
/*
函数:避免重复书写相同的过程或流程代码，实现代码复用和解耦。
    但是-同一个函数在不同类型/数量的参数上，需要编写不同的函数。
使用情况：(1)多个函数的名字形套，参数列表(数量/类型)不同。
调用过程：通过调用时的实参列表，自动匹配多个重载函数中的一个。
问题： int f(int a, int b);  VS  int f(int& a, int& b); //引用传参！
*/
#include <iostream>
#include <string>
using namespace std;

int add(int a, int b);//编译器自动匹配调用哪个参数
int add(int a, int b, int c);
int add(int a, int b, int c, int d);

string add_str(int a, int b);
string add_str(int a, string s);
string add_str(string s, int a);
string add_str(string s1, string s2);

int main(void){
    cout << "add(1,2) = " << add(1,2) << endl << "add(1,2,3) = " << add(1,2,3) << endl;
    cout << "add(1,2,3,4) = " << add(1,2,3,4) << endl;

    cout << "add_str(87,67) = " << add_str(87,67) << endl;
    cout << "add_str(87,\"a\") = " << add_str(87,"a") << endl;
    cout << "add_str(\"a\",87) = " << add_str("a",87) << endl;
    cout << "add_str(\"str1 \",\"str2\") = " << add_str("str1 ","str2") << endl;
    
    return 0;
}

int add(int a, int b){
    return a+b;
}
int add(int a, int b, int c){
    return a+b+c;
}
int add(int a, int b, int c, int d){
    return a+b+c+d;
}

string add_str(int a, int b){
    return to_string(a)+to_string(b);
}
string add_str(int a, string s){
    return to_string(a)+s;
}
string add_str(string s, int a){
    return s+to_string(a);
}
string add_str(string s1, string s2){
    return s1+s2;
}