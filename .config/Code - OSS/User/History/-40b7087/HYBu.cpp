#include <iostream>
#include <string>
#include <fstream>
#include <thread>
#include "graphics.h"

void game() {   //This function works as the game itself. The main function only initializes this function

}

void tutorial () { //This function works as a tutorial. It visualizes the game board and gives you the coordinates.
  bool tutorial_over = false;
  std::cout << "Welcome to tic-tac-toe" << std::endl;
  std::this_thread::sleep_for(std::chrono::seconds(3));
  std::cout << "To play this game, you have to know how the coordinates work." << std::endl;
  std::this_thread::sleep_for(std::chrono::seconds(4));
  std::cout << "Coordinates go like this" << std::endl;
  std::this_thread::sleep_for(std::chrono::seconds(3));
 // std::cout << 
}

int main () {
  int menu; 
  char quit;
  std::cout << "**********TIC-TAC-TOE**********" << std::endl;
  std::cout << "Welcome to tic-tac-toe\n Please select a gamemode or a tutorial";
  do {
    std::cout << "\n1. play the game\n2. see the tutorial\n3. quit\n";
    std::cout << "Enter your choice: ";
    std::cin >> menu;
    std::cin.ignore();


    switch (menu) {
      case 1:
        game();
        break;

      case 2:
        tutorial();
        break;

      case 3:
        std::cout << "Are you sure? (y/n)";
        std::cin >> quit;
        if (quit == 'y') {
          return 0;
        }

      default:
       std::cout << "not in range" << std::endl; 
       break;
    }
  }
  while(menu != 3);  
}

