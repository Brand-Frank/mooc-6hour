//异常处理 (Exception Handle)
// throw: 使用throw语句主动立即抛出一个异常对象（但不一定throw才抛异常，如n/0） 
// try: 保护一个语句块，后跟一个或多个catch块。try块中抛出异常不会立刻中止程序而是寻找catch处理
// catch: 捕获指定异常并进行处理，处理完不会再返回try块，直接离开try-catch继续执行

#include <iostream>
#include <string>
#include <exception>    //C++异常
using namespace std;

void func1() throw();   //什么都不允许抛出
void func2() throw(int, double);   //允许抛出int或double
void func3() throw(...);   //允许抛出任何东西

int main(void){
    int a, b, c;
    cout << "Input a (space) b = " ;
    cin >> a >> b;

    try {
        if(b == 0){
            throw(string("b is 0, exception throw!"));  //抛出一个异常对象
        }
        cout << "No throw." << endl;    //如果异常，这句之后不会输出
        c = a / b;
    }

    catch(string e) {   //从上到下依次尝试，直至类型匹配，一个异常只会被捕获一次
        cout << e << endl;
        c = 0;
    }
    //catch(e1)     //从详到略捕获异常

    cout << "c = " << c << endl;

    return 0;
}