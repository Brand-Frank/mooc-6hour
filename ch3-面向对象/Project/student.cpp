/*
 * @Author: codebug 
 * @Date: 2022-04-01 17:29:40 
 * @Last Modified by: codebug
 * @Last Modified time: 2022-04-01 17:56:40
 */

//外部Student类的实现(定义)
#include "student.h"

/**
 * @brief Construct a new Student:: Student object
 * 
 * @param id 学号
 * @param age 年龄
 * @param is_male 性别
 * @param name 姓名
 */
Student::Student(int id, int age, bool is_male, string name){
    this->id = id;
    this->age = age;
    this->is_male = is_male;
    this->name = name;
}

/**
 * @brief 获取学号
 * 
 * @return int 学号
 */
int Student::get_id() const {   //Note:Student:: 为类名限定符
    return id;
}

/**
 * @brief 获取年龄
 * 
 * @return int 年龄
 */
int Student::get_age() const {
    return age;
}

/**
 * @brief 获取性别
 * 
 * @return true 男性
 * @return false 女性
 */
bool Student::get_ismale() const {
    return is_male;
}

/**
 * @brief 获取姓名
 * 
 * @return string 姓名
 */
string Student::get_name() const{
    return name;
}

/**
 * @brief 设置学号
 * 
 * @param id 学号
 */
void Student::set_id(const int id){
    this->id = id;
}

/**
 * @brief 录入年龄
 * 
 * @param age 年龄
 */
void Student::set_age(const int age){
    this->age = age;
}

/**
 * @brief 设置性别
 * 
 * @param is_male 男/女
 */
void Student::set_ismale(const bool is_male){
    this->is_male = is_male;
}

/**
 * @brief 设置姓名
 * 
 * @param name 姓名
 */
void Student::set_name(const string& name){
    this->name = name;
}

/**
 * @brief 年龄+1
 * 
 */
void Student::grow_up(){
    age++;
}

/**
 * @brief 自我介绍
 * 
 */
void Student::introduce(){
    cout << "My name is " << name << ", " << age << "years old. I'm"
    << (is_male ? "male." : "female.") << endl;
}