//C++标准异常类
//C++ 根据错误分类根据预设了一系列标准异常，定义在 <exception> 中，
//它们以父子类层次结构组织，都在名字空间 std 下

#include <iostream>
#include <exception>
using namespace std;

class Myexception : public exception {
public:
    string content;
    Myexception(string content) : content(content) {}
    const char* what() const override { //继承exception类，重写它的what()方法
        return content.c_str();
    }
};

int main(void){
    try{
        Myexception e("Myexception objection.");
        throw(e);
        cout << "After throw(e)" << endl;
    }
    catch(Myexception& e) {
        cout << e.what();
    }

    return 0;
}