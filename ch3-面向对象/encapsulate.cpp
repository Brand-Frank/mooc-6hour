/*
 * @Author: codebug 
 * @Date: 2022-03-31 19:12:44 
 * @Last Modified by: codebug
 * @Last Modified time: 2022-03-31 19:29:59
 */
//封装(Encapsulate)：将类的一些成员变量或方法藏起来，不允许外界直接操作
/**
 * Note:不允许直接操作 ≠ 不允许操作，而是通过自定义的特定方法操作！(接口/句柄)
 * public(公有) | private(私有) | protect(保护)
 * (1)public(公有): 外部可以直接访问
 * (2)private(私有): getter()/setter()方法-为某些私有成员变量提供外部读写方法
 *                   getter和setter一般是public的，不然没有意义
 */
#include <iostream>
#include <string>
using namespace std;

class Book{
private:
    string name;
    int count;

public:
    Book(string name, int count){
        this->name = name;
        this->count = count;
    }
    ~Book() {}

    string getName() const {    //const常成员函数：不能修改类成员变量
        return name;
    }
    int getCount() const {
        return count;
    }
    
    string setName(const string& name){
        this->name = name;
    }
    int setCount(const int& count){
        this->count = count;
    }
};

int main(void){

    return 0;
}