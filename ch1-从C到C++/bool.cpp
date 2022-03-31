/*
 * @Author: codebug 
 * @Date: 2022-03-23 21:45:53 
 * @Last Modified by: codebug
 * @Last Modified time: 2022-03-23 21:55:23
 */

//判断数组中是否有两个连续的0
#include <iostream>
using namespace std;

int main(void){
    bool flag1 = false, flag2 = false;
    int a[] = {0, 2, 3, 0, 0, 4, 0};

    for(int i = 0; i < sizeof(a) / sizeof(int); i++) {
        if (a[i] == 0) {
            if(flag1) {
                flag2 = true;
                break;
            }
            flag1 = true;
        }
        else
            flag1 = false;
    }
    cout << (flag2 ? "yes" : "no");
}

