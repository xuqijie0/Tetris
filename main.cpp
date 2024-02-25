#include <chrono>
#include <iostream>
#include <thread>

#include "DemoFunction.h"
#include "terminal.h"
#include "utils.h"

using namespace std::chrono_literals;

void init() { tc::hide_cursor(); }

void loop() {
  int i = 0;
  while (true) {
    tc::clean_screen();
    tc::move_to(1, 1);
    std::cout << "FPS:" << ut::fps();
    tc::set_back_color(15);
    tc::move_to((i++ % 20) + 1, 10);
    std::cout << (i - 1) % 20 << " ";
    tc::reset_color();
    std::cout << std::flush;

    std::this_thread::sleep_for(400ms);
  }
}

void exit() {
  tc::show_cursor();
  tc::reset_color();
}

int main() {
  init();
  loop();
  exit();

  return 0;
}