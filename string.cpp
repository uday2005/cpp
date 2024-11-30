#include <cstdint> // for std::uint8_t
#include <iostream>

int main()
{
  std::cout << "How old are you?\n";

  int age{};   // unint8_t typically behaves as char so it will show undefined behaviour so we need to type cast it
  std::cin >> age;
    age = static_cast<std::uint8_t> (age);
  std::cout << "Allowed to drive a car in Texas: ";

// explicitely type conversion what we should try to do asn implicit type casting 
// sometime sgives ambiguity
//int x = 255;
//std::uint8_t y = x; // Implicit conversion, may generate warnings.
//std::uint8_t z = static_cast<std::uint8_t>(x); // Explicit and clear.


    constexpr  int driving_age {16};
  if (age >=  driving_age)
      std::cout << "Yes";
  else
      std::cout << "No";

    std::cout <<".\n";
    std::cout << '\n';


double pi = 3.14;
int truncated = static_cast<int>(pi); // Safer and clearer
std::cout << truncated;



  return 0;




}