//程序设计题(3)
//小明(130斤)和小红(100斤)决定减肥，请你编写类和对象实现这一过程：
// a. 吃东西(eat)增重1斤 
// b. 跑步(run)减重0.5斤 
// c. 小明跑步三次进食一次，小红跑步两次进食两次，请判断他们是否减肥成功
#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    float weight;
    float weight0;
public:
    string name;
    Person(string name, float weight){
        this->name = name;
        this->weight = weight;
        this->weight0 = weight;
    }

    float get_weight() const {
        return weight;
    }
    void eat()  { weight += 1.0f; }
    void run()  { weight -= 0.5f; }
    bool is_success(){
        return weight < weight0;    //成功：当前体重 < 最初体重
    }
};

int main(void){
    Person p1("Xiao Ming", 130);
    Person p2("Xiao Hong", 100);

    p1.run();
    p1.run();
    p1.run();

    p2.run();
    p2.run();
    p2.eat();
    p2.eat();

    cout << "Name\t\t" << "Weight\t" << "Success" << endl;
    cout << p1.name << "\t" << p1.get_weight() << "\t" << (p1.is_success() ? "success" : "failure") << endl;
    cout << p2.name << "\t" << p2.get_weight() << "\t" << (p2.is_success() ? "success" : "failure") << endl;

    return 0;
}