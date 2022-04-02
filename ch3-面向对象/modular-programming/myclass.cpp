#include "myclass.h"

Myclass::Myclass(int n){
    this->n = n;
}

int Myclass::get_n(){
    return n;
}

void Myclass::set_n(int n){
    this->n = n;
}