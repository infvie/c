#include <iostream>

int readNumber()
{
    std::cout << "Write a number:";
    int x;
    std::cin >> x;
    return x;
}

void writeNumber(int x,int y)
{
    std::cout << x+y << std::endl;
}


