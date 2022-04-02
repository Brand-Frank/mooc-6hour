//输出格式控制
// C++中，文件被封装成了流对象，控制流对象的格式，就能控制输出的格式
// • 通过往流对象中插入流格式控制符控制流对象的输出格式
//Note:控制输出信息不会被输出

//控制输出小数时保留小数点后两位
#include <iostream>
#include <fstream>
#include <iomanip>  //manipulate: 控制，操纵

using std::cout;
using std::endl;

int main(void) {
    double pi = 3.1415926;
    //      设置浮点数以固定的小数位数显示        设置精度(此时是小数点位数)为2
    cout << std::setiosflags(std::ios::fixed) << std::setprecision(2) << pi << endl;
    
    //控制输出数据的宽度：setw(n)   <5个空格>C++<3个空格>101
    std::cout << std::setw(8) << "C++" << std::setw(6) << "101" << endl;
    
    //控制输出浮点数的精度：setprecision(n)
    std::cout << std::setprecision(4) << 12.34567 << endl;  //12.35
    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(4) << 12.34567 << endl;//12.3457

    //控制输出整数的进制：setbase(n)，n∈{8, 10, 16}才有效
    std::cout << std::setbase(16) << 15 << endl;

    //控制左对齐右对齐：setiosflags(ios::left) / setiosflags(ios::right)

    return 0;
}