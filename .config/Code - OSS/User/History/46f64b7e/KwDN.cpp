#include <iostream>


void Celsius() {
    
}

int main (){
    /*Next line defines a variable, that determines the users choice
    Its purpose is to know, which unit the user wants to convert into what unit

    */
    char choise;

    char* pChoise = &choise;
    do{
        std::cout << "***Temperature conversion program***" << '\n';
        std::cout << "Would you like to convert (C)elsius, (K)elvin or (F)ahrenheit? (Exit program with Q)" << '\n';
        std::cout << "Make your choice: ";
        std::cin >> *pChoise;
        if (choise != 'q') {
            do {

                switch (*pChoise){
                    case 'C':
                        std::cout << "Working" << "\n";
                        break;

                    case 'K':
                        std::cout << "working" << "\n";
                        break;

                    case 'F':
                        std::cout << "working" << "\n";
                        break;

                    default:
                        std::cout << "Not a valid option" << "\n";
                        break;
                } 
                break;
    break;
            }
            while (choise != 'Q');
        }
        else{
            std::cout << "Goodbye" << "\n" << "\n";
            return 0;
        }
    }
    while (choise != 'q');
}