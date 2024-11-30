#include <iostream>

int main ()
{
    constexpr int x {5};
    constexpr int y {2};


    int z = x/y;
    std::cout << z << '\n';

    // so when we use the division operator between the two operand what computer does is thta
    //if either of the operand is floating point numbers then it will gives floating point numbers
    // but when we do have two integers then it will give just integer valur by drooping waht is afterwars the decimal
    
    // so how do we get the floating values back after using  division operator
    //we will be using statics cast that is used for type conversion

    double p = static_cast<double>(x)/y;
    std::cout << p<< '\n';

    double  q = static_cast<double>(x)/ static_cast<double>(y);
    std::cout << q << '\n';

    double r = x/y;  // here we are changing type conversion implicitly thta is not working here
    std::cout << r << '\n';  // so we should think of  already explicitly type casting
}