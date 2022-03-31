/*
 * @Author: codebug 
 * @Date: 2022-03-31 19:28:46 
 * @Last Modified by: codebug
 * @Last Modified time: 2022-03-31 20:25:02
 */
//getter()/setter()方法-为某些私有成员变量提供外部读/写方法
/**
 * getter()和setter()一般是public的，不然没有意义
 * error: 
 * (1)int get_n(const int n) { return n; }  //不需要参数
 * (2)void set_n(const int n) { this->n = n; }  //正确
 * (3)void get_n() const { return n; }  //void错误，需要有返回值
 * (4)int set_n(const int n) const { this->n = n; } //第二个const错误
 */
#include <iostream>
#include <string>
using namespace std;

class Book{
private:
    string name;
    int count;

public:
    Book(string name){
        this->name = name;
        count = 0;
    }
    ~Book() {}

    string getName() const {  //type name() const{} - 常成员函数：不能修改类成员变量
        return name;
    }
    int getCount() const {
        return count;
    }
    
    bool setName(const string& name){
        this->name = name;
        return true;
    }
    bool setCount(int count){
        if (count < 0){     //有控制的修改(满足条件才能修改)
            count = 0;
        }
        this->count = count;
        return true;
    }

    void add_count(){
        count++;
    }
};

int main(void){
    Book book1("《高等数学》"), book2("《大学英语》");

    cout << book1.getName() << "\t\t库存: " << book1.getCount() << endl;
    book1.setName("《高等数学（上）》");
    book1.setCount(10);
    cout << book1.getName() << "\t库存: " << book1.getCount() << endl;
    
    cout << book2.getName() << "\t\t库存: " << book2.getCount() << endl;
    book2.setName("《大学英语四级考试》");
    book2.setCount(5);
    cout << book2.getName() << "\t库存: " << book2.getCount() << endl;

    book1.add_count();
    cout << book1.getName() << "\t库存: " << book1.getCount() << endl;

    return 0;
}