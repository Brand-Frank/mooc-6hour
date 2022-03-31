#include <iostream>
#include <string>

int main(void){
    std::string str = "abcde";
    std::cout << str << std::endl;
    std::cout << str.length() << std::endl;     //string类的成员方法
    str[2] = 'C';   //修改str对象的内容
    std::cout << str << std::endl;

    return 0;
}