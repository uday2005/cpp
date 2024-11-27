#include <iostream>
 int main()
{
int x{};
std::cout << "input an integer between 0 and 9" << "\n";
std::cin >> x;
if (x==1)
std::cout << "The number is not prime";
else if (x > 3  && (x%2  == 0 || x%3 == 0))
std::cout << "The number is not prime";
else
std::cout << "The number is prime";
}
