#include <iostream>
#include <string>  // allows the use of the string
using namespace std;

int main ()
{
    std::string name{"Uday"};  //intilaised string name to uday
    name = "uddesh" ; // chnage the value of name to uddesh 

// std::string can be ouptput by using std::cout 
    std::cout << "my name is " << name << '\n';
    return 0;
}
