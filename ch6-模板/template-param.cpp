//非类型的模板参数
//模板参数不一定是类型，可以是实际数据 • 如定义一个自定义大小、类型无关的数组类

#include <iostream>
#include <string>
using namespace std;

template <typename T, int size>     //size为非类型的模板参数
class MyArray {
private:
    T data[size];
public:
    MyArray() {}
    T getEle(int index) { 
        return data[index]; 
    }
    void setEle(int index, T ele) { 
        data[index] = ele;
    }
};

int main(void){
    MyArray<float, 100> a;
    a.setEle(2, 3.f);
    cout << a.getEle(2);

    return 0;
}