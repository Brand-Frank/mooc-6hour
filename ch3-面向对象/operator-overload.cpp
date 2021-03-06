/*
 * @Author: codebug 
 * @Date: 2022-04-01 15:57:34 
 * @Last Modified by: codebug
 * @Last Modified time: 2022-04-01 16:34:59
 */

//运算符重载
/**
 * 运算符可理解为函数： 如 cout << x 等价于调用cout对象的成员函数<<，且将x作为<<函数的参数
 * 那有了函数为什么还要有运算符重载机制呢？
 * 就问你 printf(“%d”, n) 好看还是 cout << n 好看
 * 思考：有一个类Vector表示直角坐标系下的向量，如何按照数学定义实现两个向量对象的加法？
 * 
 */

#include <iostream>
using namespace std;

class A{
public:
    int n;
    char *ptr;
    A(int n){
        this->n = n;
        ptr = (char*)malloc(100);
    }
    
    // A(A& other) {       //A的拷贝构造函数
    //     this->n = other.n;
    //     this->ptr = other.ptr;  //Note:浅拷贝
    // }

    A& operator = (A& other) {       //A的拷贝构造函数
        this->n = other.n;
        this->ptr = other.ptr;  //Note:浅拷贝
        return *this;   //返回浅拷贝A对象 - 这样可以连续赋值
    }

    ~A(){
        free(ptr);
        cout << "成功析构一个A对象" << endl;
    }
};

int main(void){
    A a1(1);    cout << a1.n << "\t" << a1.ptr << endl;     //1
    A a2(2);    cout << a2.n << "\t" << a2.ptr << endl;     //2
    A a3(3);    cout << a3.n << "\t" << a3.ptr << endl;     //3
    A a4(4);    cout << a4.n << "\t" << a4.ptr << endl;     //4
    a3 = a1;
    a4 = a3 = a2 = a1;

    cout << a1.n << "\t" << a1.ptr << endl;     //1
    cout << a2.n << "\t" << a2.ptr << endl;     //1
    cout << a3.n << "\t" << a3.ptr << endl;     //1
    cout << a4.n << "\t" << a4.ptr << endl;     //1

    return 0;
}