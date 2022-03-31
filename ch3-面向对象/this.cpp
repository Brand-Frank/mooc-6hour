/*
 * @Author: codebug 
 * @Date: 2022-03-31 19:54:01 
 * @Last Modified by: codebug
 * @Last Modified time: 2022-03-31 20:34:48
 */

//this指针-指向当前对象的指针
/**
 * this指针可以不使用
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
        this->name = name;  //方法1：使用this指针指向当前对象，进行初始化
        count = 0;
    }
    ~Book() {}
    
    bool setName(const string& name){
        this->name = name;  //方法1：使用this指针指向当前对象，进行初始化
        return true;
    }
    bool setCount(int _count){  //方法2：不使用this指针，使用其他命名，便于区分
        if (_count < 0){
            _count = 0;
        }
        count = _count;
        return true;
    }

    string getName() const {
        return name;
    }
    int getCount() const {
        return count;
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

    return 0;
}