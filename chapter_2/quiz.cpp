#include <iostream>

double readNumber()
{
    double x;
    std::cout << "Enter a number: ";
    std::cin >> x;
    
    return x;
}

char readOperation()
{
    char x;
    std::cout << "What operation? ";
    std::cin >> x;
    
    return x;
}

void operate(double x,double y,char operation)
{
    if (operation == '+')
	std::cout << x + y << std::endl;
    else if (operation == '-')
 	std::cout << x - y << std::endl;
    else if (operation == '*')
	std::cout << x * y << std::endl;
    else if (operation == '/')
	std::cout << x / y << std::endl;
}

int main()
{
    double x,y;
    x = readNumber();
    y = readNumber();
    char operation;
    operation = readOperation();
    operate(x,y,operation);
    return 0;
}
