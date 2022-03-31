/*
 * @Author: codebug 
 * @Date: 2022-03-31 19:28:46 
 * @Last Modified by: codebug
 * @Last Modified time: 2022-03-31 20:25:02
 */
//getter()/setter()����-ΪĳЩ˽�г�Ա�����ṩ�ⲿ��/д����
/**
 * getter()��setter()һ����public�ģ���Ȼû������
 * error: 
 * (1)int get_n(const int n) { return n; }  //����Ҫ����
 * (2)void set_n(const int n) { this->n = n; }  //��ȷ
 * (3)void get_n() const { return n; }  //void������Ҫ�з���ֵ
 * (4)int set_n(const int n) const { this->n = n; } //�ڶ���const����
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
        this->name = name;
        count = 0;
    }
    ~Book() {}

    string getName() const {  //type name() const{} - ����Ա�����������޸����Ա����
        return name;
    }
    int getCount() const {
        return count;
    }
    
    bool setName(const string& name){
        this->name = name;
        return true;
    }
    bool setCount(int count){
        if (count < 0){     //�п��Ƶ��޸�(�������������޸�)
            count = 0;
        }
        this->count = count;
        return true;
    }

    void add_count(){
        count++;
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

    book1.add_count();
    cout << book1.getName() << "\t���: " << book1.getCount() << endl;

    return 0;
}