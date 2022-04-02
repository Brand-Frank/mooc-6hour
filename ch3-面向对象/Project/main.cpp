/*
 * @Author: codebug 
 * @Date: 2022-04-01 16:59:48 
 * @Last Modified by: codebug
 * @Last Modified time: 2022-04-01 17:38:39
 */

//类模块化编程
//CMD: g++ .\main.cpp .\student.cpp .\student.h -o student
#include "student.h"

int main(void){
    Student s1(11, 21, MAN, "Mike");
    Student s2(52, 19, WOMAN, "Mary");

    s1.introduce();
    s2.introduce();
}