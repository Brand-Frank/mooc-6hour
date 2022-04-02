//new[] 和 delete[] 运算符
//• new[]：申请空间并批量构造对象数组，返回首元素指针
//• delete[]：批量析构对象数组并释放空间，只能用于new[]出来的指针

#include <iostream>
using namespace std;

class A {
public:
    A() { cout << "A constructed" << endl; }
    void func() { cout << "func called" << endl; }
    ~A() { cout << "A destructed" << endl; } 
};

int main(void) {
    A* p_a = new A[6];  //申请空间并批量构造对象数组，返回首元素指针//Note:new指定数组大小
    (p_a + 1)->func();
    delete[] p_a;   //批量析构对象数组并释放空间，只能用于new[]出来的指针//Note:delete不需指定数组大小

    return 0;
}

/**
 *  A constructed
    A constructed
    A constructed
    A constructed
    A constructed
    A constructed
    func called
    A destructed
    A destructed
    A destructed
    A destructed
    A destructed
    A destructed
 * 
 */