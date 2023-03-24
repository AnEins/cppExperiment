//
// Created by zengx on 2023/3/23.
//
#include <iostream>
#include <ncurses.h>
#include <vector>
#include <array>
#include <cmath>
#ifdef OS_WINDOWS
#include <Windows.h>
#else
#include <unistd.h>
#endif
// g++ ../Day4/A2.cpp -o test -lncurses
using namespace std;
const unsigned int klink = 0;
const unsigned int kright = 1;
//cd build && g++ ../Day4/A2.cpp -o test -lncurses && ./test

const double precision = 0.00001;
class KeyboardControl {
 private:

 public:
  KeyboardControl() = default;
  void Communicate();
  double Step();
  array<double, 2> actual_speed = {0., 0.};
  array<double, 2> desired_speed = {-0.49, -0.49};
  vector<array<double, 2>> set_speed_history = {{0, 0}};
  //Stelle '0' die v des rechten Motors
  //Stelle '1' die v des linken Motors.

};
void KeyboardControl::Communicate() {
  char ch;
  vector<char> List;
  initscr();
  noecho();
  nodelay(stdscr, true);
  while ((ch = getch()) != 'q') {
    if (ch != -1) {
      List.push_back(ch);
      //erase();
      //clear();
      printw("%c\n", ch);
      refresh();
      switch (ch) {
        case 'w':
          //vorwärts
          if (fabs(desired_speed[0] + 0.01) < 0.5001 && fabs(desired_speed[1] + 0.01) < 0.5001) {
            desired_speed[0] += 0.01;
            desired_speed[1] += 0.01;
          } else {
            printw("The speed is over 0.5. Can't speed up anymore\n");
            continue;
          }

          break;
        case 's':
          //Rückwärts
          if (fabs(desired_speed[0] - 0.01) < 0.5001 && fabs(desired_speed[1] - 0.01) < 0.5001) {
            desired_speed[0] -= 0.01;
            desired_speed[1] -= 0.01;
          } else {
            printw("The speed is over 0.5. Can't speed up anymore\n");
            continue;
          }

          break;
        case 'a':
          //Drehen gegen Uhrzeigersinn
          if (fabs(desired_speed[0] + 0.005) < 0.5001 && fabs(desired_speed[1] - 0.005) < 0.5001) {
            desired_speed[0] += 0.005;
            desired_speed[1] -= 0.005;
          } else {
            printw("The speed is over the +- 0.5 range.\n");
            continue;
          }
          break;

        case 'd':
          //Drehen in Uhrzeigersinn
          if (fabs(desired_speed[0] - 0.005) < 0.5001 && fabs(desired_speed[1] + 0.005) < 0.5001) {
            desired_speed[0] -= 0.005;//rechts
            desired_speed[1] += 0.005;//links
          } else {
            printw("The speed is over the +- 0.5 range.\n");
            continue;
          }
          break;
        case 'b':
          //anhalten
          desired_speed[0] = 0;
          desired_speed[1] = 0;
          break;
          //case 'q':
        default:printw("only w/s/a/d/q/b\n");
          continue;
      }

      printw("desired speed: R: %f; L: %f", desired_speed[0], desired_speed[1]);
      refresh();
      set_speed_history.push_back({desired_speed[0], desired_speed[1]});

    }
  }
  //Anhalten des Car und Beenden von Programm
  desired_speed[0] = 0;
  desired_speed[1] = 0;
  while (fabs(actual_speed[0] - 0.) > precision || fabs(actual_speed[1] - 0.) > precision) {
    //fabs(actual_speed[0] - 0.) : Ist-Geschwindigkeit != 0;
    /*The braking process takes time, check that the actual speed is equal to zero every two seconds* */
    sleep(1);
    printw("actual speed: R: %f; L: %f", actual_speed[0], actual_speed[1]);
    refresh();
    if (actual_speed[0] == 0 && actual_speed[1] == 0) {
      printw("actual speed: R: %f; L: %f", actual_speed[0], actual_speed[1]);
      refresh();
      break;
    }
  }

  printw("\nLeaving the Programm\n");
  refresh();
  sleep(2);
  //sleep() does nothing, but give the user a little reaction/reading time from an ergonomic point of view
  getch();
  endwin();
}
int main() {

  KeyboardControl car;
  car.Communicate();

  cout << "desired_speed_history" << std::endl;
  for (int i = 0; i < car.set_speed_history.size(); ++i) {
    for (int j = 0; j < car.set_speed_history[i].size(); ++j) {
      std::cout << car.set_speed_history[i][j] << " ";
    }
    cout << std::endl;
  }
  return 0;
}