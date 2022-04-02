#include "myclass.h"

int Myclass::cnt = 0;   //TODO：静态成员变量必须在类声明*外部*单独初始化！

Myclass::Myclass(){
    cnt++;
}

void Myclass::dispaly(){
    cout << "现有 " << cnt << "个Myclass对象" << endl;
}
Myclass::~Myclass(){
    cnt--;
}