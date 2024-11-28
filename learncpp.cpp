#include <iostream>
#include <string>  // allows the use of the string
using namespace std;

int main ()
{


    std::cout << "what is your name" << '\n';
    std::string name {};
    std::cin >> name;

    std::cout << "what is your favourite color" <<'\n';
    std::string color{};
    std::cin >> color;

    std::cout << "Your name is " << name<< " and your favourite color is " << color <<'\n';

//so the thing is we input our name and it will of only one letter without whitespace
//then this will run fine and ask next what is your favourit ecolor and proceed to do so

//but the problem is when we have a white spaces between the like uday kumar so the cin will break
//at the first whitespace it will encounter and waiting fro anouther cin and give color the value 
//of last name so it will not take input of color
    return 0;
}
