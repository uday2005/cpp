#include <iostream>

char GetOperations(char sign)
{
    std::cout << "enter the operation you want to do" << '\n' ;
    std::cin >> sign ;
    return sign;
}
double GetNumbersdouble ()
{
    double num {};
    std::cout << "Enter a double value" << '\n';
    std::cin >> num ;
    return num;
}

int main()
{
    double x {GetNumbersdouble()};
    double y {GetNumbersdouble()};
std::cout << "x value is " << x << '\n';
std::cout << "y value is " <<  y << '\n';

    char sign{GetOperations(sign)};
std::cout << "the operands is "  << sign << '\n';
    if (sign == '+')
    std::cout << "The value of " <<x << " " << sign << " " << y << " is " << x + y << '\n';
    if (sign == '-')
    std::cout << "The value of " <<x  << " "<< sign << y << " is " << x - y << '\n';
    if (sign == '*')
    std::cout << "The value of " <<x << " " << sign << y << " is " << x * y << '\n';
    if (sign == '/')
    std::cout << "The value of " <<x  << " "<< sign << y << " is " << x / y << '\n';
    else
    std::cout << " ";
    
    


}