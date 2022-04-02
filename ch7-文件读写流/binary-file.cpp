//二进制文件：将数据在内存中的实际存储内容直接写入到文件中，读取时需要知道存储和理解的格式
//文本文件：将数据作为一串字符逐一输出到文件中，读取时再按照ASCII码逐字符解读为文本
#include <iostream>
#include <fstream>

using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::ios;
using std::string;

int main(void) {
    // ofstream fout;
    // fout.open("data.bin", ios::out|ios::binary);   //以输出模式打开文件，不存在则新建，存在则清空

    // if(!fout.is_open()){
    //     cout << "fout error!" << endl;
    //     return 0;
    // }

    // int a = 9999;
    // char b = 'a';
    // float c = 12.34f;

    // fout.write((char*)&a, sizeof(int));
    // fout.write((char*)&b, sizeof(char));
    // fout.write((char*)&c, sizeof(float));
    // fout.close();

    ifstream fin;
    fin.open("data.bin", ios::in | ios::binary);
    if(!fin.is_open()) {
        cout << "fin error!" << endl;
        return 0;
    }
    
    int a; char b; float c;
    fin.read((char*)&a, sizeof(int));
    fin.read((char*)&b, sizeof(char));
    fin.read((char*)&c, sizeof(float));
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    fin.close();

    return 0;
}