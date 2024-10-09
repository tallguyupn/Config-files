#include <iostream>

namespace first(){
    int x = 1;
}

int main (){
    int x = 2;
    std::cout << first::+x;
    return 0;
}