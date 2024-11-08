#include <iostream>
#include <cmath>


void pr () {
    int määrä;
    char merkki;
    std::cout << "Anna määrä: ";
    std::cin >> määrä; 
    std::cout << "\nAnna merkki: ";
    std::cin >> merkki;

}

int main (char merkki, int määrä){
    int luku = 20; 
    std::cout << "Päivää \n";
    pr();
    int kk = remainder(määrä, 3);

    if (määrä > 20){
        std::cout << "\n Liian suuri määrä";
        return 0;
    } 
   else {
        int kokonaismäärä = määrä/3 - kk;
        do {
            std::cout << "moi" << "...";
        }
        while (int luku = 20); 
    }
}