#include <fstream>
#include <iostream>
#include <string>

int write(std::string text, std::string path) {
    std::ofstream ofs(path);  // 打开文件用于写，若文件不存在就创建它
    if (!ofs)
        return 1;  // 打开文件失败则结束运行
    ofs << text << std::endl;
    ofs.close();
    return 0;
}

size_t read(std::string text, std::string path, int& lines) {
    std::ifstream ifs(path);
    if (!ifs)
        return 1;
    std::string line;
    lines = 0;
    while (std::getline(ifs, line)) {
        ++lines;  // 行数递增
        size_t info = line.find(text);
        if (info != std::string::npos)
            return info;
    }
    ifs.close();
    return 2;  // 查找失败
}

int find(std::string text, std::string path,int lines){

}