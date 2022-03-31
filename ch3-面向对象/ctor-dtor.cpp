/*
 * @Author: codebug 
 * @Date: 2022-03-31 18:55:03 
 * @Last Modified by: codebug
 * @Last Modified time: 2022-03-31 19:11:10
 */
//构造函数(construcor)和析构函数(destructor)：两种特殊的类成员函数
/**
 * 构造：实例化对象时，在分配得到的空间上构造对象(如初始化成员变量，分配资源等
 *  - 默认构造函数：没有参数的构造函数
 *  - 有参数构造函数：有参数的构造函数
 * 析构：对象生命周期结束时，回收空间前，完成对象的清理工作(如释放资源等)
 * @note 构造函数析构函数都没有返回值
 * @note 析构函数没有参数
 */
#include <iostream>
using namespace std;

class A{
public:
    int n;
    char* data = nullptr;

    A(int n){   //有参构造函数
        this->n = n;
        data = (char*)malloc(100);  //分配资源
    }

    ~A(){       //析构函数
        free(data); //释放资源
    };
};

int main(void){
    A a1(10);
    cout << "a1.n = " << a1.n << endl;
    cout << "a1.data = " << a1.data << endl;
    //cout << "a1.~A() = " << a1.~A() << endl;  //error
    a1.~A();
    return 0;
}