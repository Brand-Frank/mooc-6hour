#ifndef _STUDENT_H_
#define _STUDENT_H_

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

#define MAN true
#define WOMAN false

/**
 * @brief 声明一个Student类
 * @param id 学号
 * @param age 年龄
 * @param is_male 性别
 * @param name 姓名
 */
class Student{
private:
    int id;         //学号
    int age;        //年龄
    bool is_male;   //性别
    string name;    //姓名

public:
    Student(int id, int age, bool is_male, string name);    //有参构造函数
    
    int get_id() const;
    int get_age() const;
    bool get_ismale() const;
    string get_name() const;

    void set_id(const int id);
    void set_age(const int age);
    void set_ismale(const bool is_male);
    void set_name(const string& name);

    void grow_up();
    void introduce();
};

#endif