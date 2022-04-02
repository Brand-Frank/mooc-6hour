#ifndef _MYCLASS_H_
#define _MYCLASS_H_

#include <iostream>
using std::cout;
using std::endl;

class Myclass{
private:
    static int cnt;
public:
    Myclass();
    static void dispaly();
    ~Myclass();
};

#endif