#include <iostream>
using namespace std;

int power(int n, int x = 2);    //����Ĭ�ϲ��� (x=2)    f=n^x

int main(void) {
    cout << power(5) << endl;   //ʹ��Ĭ�ϲ��� x=2  5^2=25
    cout << power(4, 4);    //4^4=256

    return 0;
}

int power(int n, int x) {
    int ans = 1;
    for (int i = 0; i < x; i++) {
        ans *= n;
    }
    return ans;
}