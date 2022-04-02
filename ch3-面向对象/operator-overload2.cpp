/*
 * @Author: codebug 
 * @Date: 2022-04-01 16:08:30 
 * @Last Modified by: codebug
 * @Last Modified time: 2022-04-01 16:32:26
 */
//运算符重载
/**
 * 为自定义的类重载一个运算符函数，其第一个操作数是*对象本身*，其他操作数是*该函数参数*
 * 为Vector类重载'+'号，使'+'作为*Vector类的一个成员函数*，参数是*另一个Vector对象的引用*
 */

#include <iostream>
using namespace std;

class Vector { 
public:
    int a;
    int b;
    Vector(int a, int b) { 
        this->a = a;
        this->b = b;
    }

    Vector operator + (Vector& other){  //运算符重载，等价于 add_two_vec()函数
        return Vector(this->a+other.a, this->b+other.b);
    }
};

Vector add_two_vec(Vector& v1, Vector v2){
    Vector result(v1.a+v2.a, v1.b+v2.b);
    return result;
}

int main(void){
    Vector v1(3,4);
    Vector v2(2,6);
    Vector v3 = add_two_vec(v1, v2);    //函数方式
    cout << v3.a << endl << v3.b << endl;
    
    Vector o1(10,5);
    Vector o2(5,3);
    Vector o3 = o1 + o2;    //+运算符重载方式
    cout << o3.a << endl << o3.b << endl;

    return 0;
}