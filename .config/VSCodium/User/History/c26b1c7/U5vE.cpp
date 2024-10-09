#include <iostream>

namespace first{
    int x = 1;
}

int main (){
    using namespace first;


    std::cout << first::x;

    return 0;
}