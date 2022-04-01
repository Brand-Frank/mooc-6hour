/*
 * @Author: codebug 
 * @Date: 2022-03-31 23:58:23 
 * @Last Modified by: codebug
 * @Last Modified time: 2022-04-01 15:20:42
 */

//��̬(polymorphism)
/**
 * ͨ�����麯��+ָ���������ĸ���ָ�롱�����԰Ѳ�ͬ������ͳһ��Ϊ�乲ͬ����
 * ���ǣ�������Բ�ͬ������д��ͬ���߼���ͳһ��Ϊ�乲ͬ���࣬����ָ���������
 * ���ʣ��麯��������ʲô����ô�����룬����ָ��Ҫ��ʲô��������ʵ�־�������
 */
#include <iostream>
using namespace std;

class Human{
public:
    virtual void toilet() = 0;  //��ȷ���Ա�/�ϲ�����ʽ
};

class Man : public Human{
public:
    void toilet(){
        cout << "��Ҫ���в���" << endl;
    }
};

class Woman : public Human{
public:
    void toilet(){
        cout << "��Ҫ��Ů����" << endl;
    }
};

class Non : public Human{
public:
    void toilet(){
        cout << "��ȥ���Ա����" << endl;
    }
};

void func(Human *human){
    human->toilet();        //human����ָ�����ֲ�ͬ��ʵ�ʶ��󣬵���func������ʵ����ʲô��������toilet����
}

int main(void){
    Man man1, man2, man3;
    Woman woman1, woman2, woman3;
    Non non1, non2, non3;

    //�ܶ����ͨ������func�������ϲ���
    func(&man1);
    func(&woman1);
    func(&non1);
    
    return 0;
}