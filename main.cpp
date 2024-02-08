#include <iostream>
#include "DemoFunction.h"
#include "terminal.h"


int main () {

    tc::move_to(5, 10);
    tc::set_fore_color(214);
    std::cout << "Hello World" << std::endl;
    tc::move_to(10, 1);
    return 0;
}