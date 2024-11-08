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
        for (int i = 0; i < 20; i+3) {
            std::cout << char*3 << "..."
        }
        std::cout << char*kk
    }
}