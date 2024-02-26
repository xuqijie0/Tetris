#include <chrono>
#include <iostream>
#include <thread>

#include "DemoFunction.h"
#include "draw.h"
#include "terminal.h"
#include "utils.h"

using namespace std::chrono_literals;

void init() {
  tc::clean_screen();
  tc::hide_cursor();
  dw::window(1, 1, 9, 6, "Hold");
  dw::window(1, 10, 12, 22, "Tetriz");
  dw::window(7, 1, 9, 16, "Status");
  dw::window(19, 22, 8, 4, "Info");
  dw::window(1, 22, 8, 18, "Next");
}

void loop() {
  int i = 0;
  while (true) {
    tc::move_to(10, 4);
    std::cout << "FPS:" << ut::fps();
    tc::set_back_color(15);
    tc::move_to(10, 10);
    std::cout << "  ";
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