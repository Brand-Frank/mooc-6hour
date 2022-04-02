//模板类
//可以把模板参数用在类定义上 • 即模板参数的作用范围为该类内部 • 如自定义一个类型无关的数组类
#include <iostream>
#include <string>
using namespace std;

template <typename T>
class MyArray {
private:
    T data[100];
public:
    MyArray() {}
    T getEle(int index) { return data[index]; }
    void setEle(int index, T ele){
        data[index] = ele;
    }
};

int main(void){
    MyArray<float> a;
    a.setEle(2, 3.14f);
    cout << a.getEle(2);

    return 0;
}