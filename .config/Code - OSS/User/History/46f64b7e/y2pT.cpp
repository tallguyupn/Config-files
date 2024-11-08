#include <iostream>


void Celsius() {
    
}

int main (){
    /*Next line defines a variable, that determines the users choice
    Its purpose is to know, which unit the user wants to convert into what unit

    */
    int choise;

    int* pChoise = &choise;

    std::cout << "***Temperature conversion program***" << '\n';
    std::cout << "Would you like to convert (C)elsius, (K)elvin or (F)ahrenheit? (Exit program with Q)" << '\n';
    std::cout << "Make your choice: ";
    std::cin >> *pChoise;
    do {

        switch (*ptr){
            case 'C':
                std::cout << "Working" << "\n";
                break;

            case 'K':
                std::cout << "working" << "\n";
                break;

            case 'F':
                std::cout << "working" << "\n";
                break;

            case 'Q':
                std::cout << "goodbye" << "\n";
                return 0;
                break           

            default:
                std::cout << "working" << "\n";
                break;
         } 
        break;
    }
    while (choise != 'Q');
}