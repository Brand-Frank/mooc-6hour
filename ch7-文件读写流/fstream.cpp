//文件输入输出流
#include <fstream>  //file stream
#include <iostream>

int main(void) {
    std::ifstream fin;  //输入文件流(读文件对象)
    std::ofstream fout; //输出文件流(写文件对象)

    //文件打开，检测…
    fout.open("file.txt",std::ios::out);    //文件名，文件打开模式
    if(!fout.is_open()) {
        std::cout << "Open error!" << std::endl;
        return 0;
    }
    //fin >> nVar;     //通过fin和fout读写文本文件 就相当于把其内容原封不动 放到控制台中用cin和cout读写
    fout << "Hello, everybody!";

    //流对象，能读和写
    std::fstream fs;
    fs.open("io.txt", std::ios::in | std::ios::out);
    
    // 文件关闭…
    fout.close();

    return 0;
}