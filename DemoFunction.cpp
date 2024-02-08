#include "DemoFunction.h"

void cursor_mode() {
    //  光标移动到第5行第10列
    //  字体颜色设为橘黄色， 打印
    //  光标移动到第10行第1列
    std::cout << "\033[5;10H\033[38;5;214m" << "Hello World" << "\033[10;1H";
}