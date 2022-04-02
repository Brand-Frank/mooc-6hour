/*
 * @Author: codebug 
 * @Date: 2022-04-01 18:09:50 
 * @Last Modified by: codebug
 * @Last Modified time: 2022-04-01 18:22:48
 */
//CMD: g++ .\main.cpp .\myclass.cpp .\myclass.h -o main
#include "myclass.h"

int main(void){
    Myclass::dispaly();     //Note： static成员不依赖于对象而存在

    Myclass c1;
    Myclass::dispaly();

    Myclass c2;
    Myclass::dispaly();
    {
        Myclass c2;
        Myclass::dispaly();
    }
    Myclass::dispaly();
    
    return 0;
}