#include <iostream>
#include "const.h"

double getTowerHeight()
{
    std::cout << "What is the height of the tower? ";
    int x;
    std::cin >> x;

    return x;
}

double calculateHeight(double h, int s)
{
    double distFallen = s*s*constants::g/2;
    return h - distFallen;
}

void printLocation(double currentHeight, int s)
{
    if (currentHeight > 0)
	std::cout << "The current height is " << currentHeight << " after " << s << " seconds.\n";
    else
	std::cout << "The ball has landed.\n";
}

void calcAndPrint(double h,double s)
{
    double currentHeight = calculateHeight(h,s);
    printLocation(currentHeight,s);
}

    
int main()
{
    const double h = getTowerHeight();
    
    calcAndPrint(h,3);

    return 0;
}
