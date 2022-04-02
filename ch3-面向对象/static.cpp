//类的静态成员 - 类利用其static成员变量来记录它的实例化对象的实时数目
/**
 * 隶属于类，不属于任何一个对象，生命周期贯穿整个程序
 * 类比：静态成员变量是写在设计图纸上的数据，与楼无关
 * //Note：类内可直接访问，外部则需要通过 **类名::变量名** 访问
 * 静态成员变量必须在类声明*外部*单独初始化！
 * //Note：格式： 数据类型 类名::变量名 = 初始值;  (datatype classname::varname = value)
 * 
 */
#include <iostream>
using namespace std;

class A{
public:
    static int cnt;
    A() { cnt++; }
    ~A() { cnt--; }
};

int A::cnt = 0;

int main(void){
    A a1;
    cout << "cnt = " << A::cnt << endl; //1

    A a2;
    cout << "cnt = " << A::cnt << endl; //2
    
    {
        A a3;
        cout << "cnt = " << A::cnt << endl; //3
    }
    
    cout << "cnt = " << A::cnt << endl; //2

    return 0;
}