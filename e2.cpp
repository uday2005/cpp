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

void Printresult(double x ,char sign ,double y)
{
    double result{};

    if (sign == '+')
        result = x+y;
    else if (sign == '-')
        result = x-y;
    else if(sign == '*')
        result = x*y;
    else if (sign == '/')
        result = x/y;

    std::cout << x << ' ' << sign << ' ' << y << " is " << result << '\n';

}
int main()
{
    double x {GetNumbersdouble()};
    double y {GetNumbersdouble()};
//std::cout << "x value is " << x << '\n';
//std::cout << "y value is " <<  y << '\n';
//std::cout << "the operands is "  << sign << '\n';

    char sign{GetOperations(sign)};

    Printresult(x,sign,y);
    return 0;
}