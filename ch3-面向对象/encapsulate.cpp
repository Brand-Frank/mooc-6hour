/*
 * @Author: codebug 
 * @Date: 2022-03-31 19:12:44 
 * @Last Modified by: codebug
 * @Last Modified time: 2022-03-31 19:29:59
 */
//��װ(Encapsulate)�������һЩ��Ա�����򷽷������������������ֱ�Ӳ���
/**
 * Note:������ֱ�Ӳ��� �� ���������������ͨ���Զ�����ض�����������(�ӿ�/���)
 * public(����) | private(˽��) | protect(����)
 * (1)public(����): �ⲿ����ֱ�ӷ���
 * (2)private(˽��): getter()/setter()����-ΪĳЩ˽�г�Ա�����ṩ�ⲿ��д����
 *                   getter��setterһ����public�ģ���Ȼû������
 */
#include <iostream>
#include <string>
using namespace std;

class Book{
private:
    string name;
    int count;

public:
    Book(string name, int count){
        this->name = name;
        this->count = count;
    }
    ~Book() {}

    string getName() const {    //const����Ա�����������޸����Ա����
        return name;
    }
    int getCount() const {
        return count;
    }
    
    string setName(const string& name){
        this->name = name;
    }
    int setCount(const int& count){
        this->count = count;
    }
};

int main(void){

    return 0;
}