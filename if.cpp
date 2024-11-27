#include <iostream>

bool isprime(int x)
{
    return (x== 2 || x== 3||x==5||x==7);
}
 int main()
{
    std::cout << "input the integer between 0 to 9" << "\n";
    int x {};
    std::cin >> x;

    if (isprime(x))
    std::cout << "This is a prime number" << "\n";
    else
    std::cout << "this is not a prime number" << "\n";
}

// this solution will be only valid if the number will be very small 
// as in the question only we have 0 to 9

