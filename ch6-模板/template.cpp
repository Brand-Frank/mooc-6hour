//模板编程(Template)：类型参数化，将类型信息也视作一个普通参数，使代码逻辑与类型信息分离(泛型思想)

//通过模板实现(一个模板函数)
#include <iostream>
#include <string>
using namespace std;

// string myAdd(int a, int b) { 
//     return to_string(a) + to_string(b);
// }

template<typename T1, typename T2>
string myAdd(T1 a, T2 b){
    if(isalnum(a) && isalnum(b)) return to_string(a) + to_string(b);
    if(isalpha(a) && isalnum(b)) return a + to_string(b);
    if(isalpha(a) && isalpha(b)) return a + b;
}

int main(void) {
    // 调用：
    cout << myAdd("Zhang", 999) << endl;
    cout << myAdd(3.14f, "Yin") << endl;
    cout << myAdd("temp", "late") << endl;

    return 0;
}