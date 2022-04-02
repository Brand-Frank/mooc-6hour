/*
 * @Author: codebug 
 * @Date: 2022-04-01 15:41:54 
 * @Last Modified by: codebug
 * @Last Modified time: 2022-04-01 15:58:26
 */

//拷贝构造函数 - 拷贝已存在同类对象来构造新对象，因此参数是该*类的引用*
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

    A(A& other) {       //A的拷贝构造函数
        this->n = other.n;
        this->ptr = (char*)malloc(100);
        memcpy(this->ptr, other.ptr, 100);  //Note:深拷贝,将间接资源也复制了一遍
    }
    
    ~A(){
        free(ptr);
        cout << "成功析构一个A对象" << endl;
    }
};

int main(void){
    A a1(10);
    A a2(a1);   //如果是浅拷贝，第一次a1.ptr会被析构，之后的ptr不能被析构，因为用的都是同一块内存
    A a3(a1);  // 等价于A a3 = a1;
    
    return 0;
}