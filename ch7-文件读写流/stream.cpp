//文件读写流 例程
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
    ifstream fin;
    ofstream fout;
    fin.open("myFile.txt", ios::in);    //以输入模式打开已存在文件，不存在会报错
    fout.open("otherFile.txt", ios::out);   //以输出模式打开文件，不存在则新建，存在则清空

    if(!fin.is_open() || !fout.is_open()){
        cout << "Open error!" << endl;
        return 0;
    }

    string name;
    int id;
    float score;

    while(!fin.eof()) {
        fin >> name >> id >> score; //从myFile.txt中读入
        fout << id << " " << name << " " << score << endl;  //换一个顺序输出
    }

    fin.close();
    fout.close();

    return 0;
}