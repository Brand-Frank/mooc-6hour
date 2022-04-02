//异常处理实例
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class TriangleException : public exception {
public:
    float a;
    float b;
    float c;
    TriangleException(float a, float b, float c) : a(a), b(b), c(c) {}
    const char* what() const override {     //继承exception类，重写它的what()方法
        return "Invalid triangle exception!";
    }
};

//通过海伦公式计算三角形面积
float get_triangle_area(float a, float b, float c) throw(TriangleException) {
    if(a + b <= c || a + c <= b || b + c <= a){
        throw(TriangleException(a, b, c));  //(2)手动抛出异常
    }
    float p = (a + b + c) / 2.f;
    float S = p * (p-a) * (p-b) * (p-c);
    return sqrtf(S);
}

int main(void){
    float a, b, c, result;
    cout << "a = " ;    cin >> a;
    cout << "b = " ;    cin >> b;
    cout << "c = " ;    cin >> c;

    try{    //(1)保护代码段
        result = get_triangle_area(a, b, c);
    }
    catch(TriangleException e){ //(3)捕获异常
        cout << e.what() << endl;
        result = 0.f;
    }

    cout << "result = " << result << endl;

    return 0;
}