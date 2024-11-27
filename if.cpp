#include <iostream>

bool isprime(int x)
{
    if (x == 2)
        return true;
    else if (x == 3)
        return true;
    else if (x == 5)
        return true;
    else if (x == 7)
        return true;
    
    return false;
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
