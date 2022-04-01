/*
 * @Author: codebug 
 * @Date: 2022-03-31 23:58:23 
 * @Last Modified by: codebug
 * @Last Modified time: 2022-04-01 15:20:42
 */

//多态(polymorphism)
/**
 * 通过“虚函数+指向子类对象的父类指针”，可以把不同的子类统一视为其共同父类
 * 于是，无需针对不同的子类写相同的逻辑，统一视为其共同父类，利用指针操作即可
 * 本质：虚函数将能做什么和怎么做分离，父类指定要做什么，子类来实现具体做法
 */
#include <iostream>
using namespace std;

class Human{
public:
    virtual void toilet() = 0;  //不确定性别/上厕所方式
};

class Man : public Human{
public:
    void toilet(){
        cout << "我要上男厕所" << endl;
    }
};

class Woman : public Human{
public:
    void toilet(){
        cout << "我要上女厕所" << endl;
    }
};

class Non : public Human{
public:
    void toilet(){
        cout << "我去无性别厕所" << endl;
    }
};

void func(Human *human){
    human->toilet();        //human可能指向三种不同的实际对象，但是func不关心实际是什么，反正能toilet就行
}

int main(void){
    Man man1, man2, man3;
    Woman woman1, woman2, woman3;
    Non non1, non2, non3;

    //很多对象，通过函数func让他们上厕所
    func(&man1);
    func(&woman1);
    func(&non1);
    
    return 0;
}