/*
 * @Author: codebug 
 * @Date: 2022-03-23 21:31:40 
 * @Last Modified by: codebug
 * @Last Modified time: 2022-03-23 21:32:21
 */

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

int main(void){
    string str = "abcde";
    cout << str << endl;
    cout << str.length() << endl;     //string类的成员方法
    str[2] = 'C';   //修改str对象的内容
    cout << str << endl;

    return 0;
}