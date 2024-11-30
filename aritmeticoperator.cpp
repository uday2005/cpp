#include <iostream>

constexpr bool isEven (int num)
{
    // if (num % 2 == 0)
    //     return true;
    // else
    //     return false ;

    return (num % 2 ==0) ;
}


int main ()
{
    std::cout << "Enter a natural number" <<'\n';
    int num {};
    std::cin >> num ;

    if (isEven(num))
        std::cout << num << "is a even number"  << '\n';
    else
        std::cout << num << "is a odd number" << '\n';


}