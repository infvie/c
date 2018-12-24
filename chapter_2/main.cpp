#include <iostream>

int main()
{
    std::cout << "Enter a digit:";
    int x;
    std::cin >> x;
    
    if (x == 4 || x == 6 || x == 8 || x == 9)
	std::cout << "Digit is not prime." << std::endl;
    else
	std::cout << "Digit is prime." << std::endl;

    return 0;
}
