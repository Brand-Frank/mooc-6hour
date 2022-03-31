/*
 * @Author: codebug 
 * @Date: 2022-03-31 19:54:01 
 * @Last Modified by: codebug
 * @Last Modified time: 2022-03-31 20:34:48
 */

//thisָ��-ָ��ǰ�����ָ��
/**
 * thisָ����Բ�ʹ��
 */
#include <iostream>
#include <string>
using namespace std;

class Book{
private:
    string name;
    int count;

public:
    Book(string name){
        this->name = name;  //����1��ʹ��thisָ��ָ��ǰ���󣬽��г�ʼ��
        count = 0;
    }
    ~Book() {}
    
    bool setName(const string& name){
        this->name = name;  //����1��ʹ��thisָ��ָ��ǰ���󣬽��г�ʼ��
        return true;
    }
    bool setCount(int _count){  //����2����ʹ��thisָ�룬ʹ��������������������
        if (_count < 0){
            _count = 0;
        }
        count = _count;
        return true;
    }

    string getName() const {
        return name;
    }
    int getCount() const {
        return count;
    }
};

int main(void){
    Book book1("���ߵ���ѧ��"), book2("����ѧӢ�");

    cout << book1.getName() << "\t\t���: " << book1.getCount() << endl;
    book1.setName("���ߵ���ѧ���ϣ���");
    book1.setCount(10);
    cout << book1.getName() << "\t���: " << book1.getCount() << endl;

    cout << book2.getName() << "\t\t���: " << book2.getCount() << endl;
    book2.setName("����ѧӢ���ļ����ԡ�");
    book2.setCount(5);
    cout << book2.getName() << "\t���: " << book2.getCount() << endl;

    return 0;
}