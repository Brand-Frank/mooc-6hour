//程序设计题(1)
//设计一个汽车类Vehicle，包含数据成员车轮数，由它派生出类Car和类Truck，前者包含载客数，
//后者包含 载重量。要求实现类的封装性并提供相应的数据读写接口
#include <iostream>
using namespace std;

class Vehicle {
private:
    int wheels;
public:
    Vehicle(int wheels) : wheels(wheels) { }
    //或
    Vehicle(int wheels) {
        this->wheels = wheels;
    }
    int get_wheels() const { return wheels; }
    void set_wheels(const int wheels) { this->wheels = wheels; }
};

class Car : public Vehicle {
private:
    int passenger;
public:
    Car(int passenger, int wheels) : Vehicle(wheels), passenger(passenger) { }
    int get_passenger() const { return passenger; }
    void set_passenger(const int passenger) { this->passenger = passenger; }
};

class Truck : public Vehicle {
private:
    float weight;
public:
    Truck(float weight, int wheels) : Vehicle(wheels), weight(weight) { }
    int get_weight() const { return weight; }
    void set_weight(const float weight) { this->weight = weight; }
};

int main(void){
    
    return 0;
}