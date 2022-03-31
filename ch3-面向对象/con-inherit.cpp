/*
 * @Author: codebug 
 * @Date: 2022-03-31 20:59:54 
 * @Last Modified by: codebug
 * @Last Modified time: 2022-03-31 21:11:32
 */

//父子同名成员并存
/**
 * 子类中同时有两个n和两个func()
 * 默认是子类的成员和方法
 */
#include <iostream>
using namespace std;

class Father{
public:
    int n = 1;
    void func(){
        cout << "This is father." << endl;
    }
};

class Son : public Father{
public:
    int n = 2;
    void func(){
        cout << "This is son." << endl;
    }
    void set(){     //同时修改了父类和子类的成员
        Father::n = -1;
        n = -2;
    }
};

int main(void){
    Son son;

    son.func();
    cout << "son.n = " << son.n << endl;
    son.Father::func();     //父子类同名成员或方法时，使用父类的命名空间显式指明
    cout << "son.Father::n = " << son.Father::n << endl;

    son.set();
    cout << "\nAfter son.set():\n" << "son.n = " << son.n << endl;
    cout << "son.Father::n = " << son.Father::n << endl;

    return 0;
}