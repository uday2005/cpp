#include <iostream>
#include <string>  // allows the use of the std::string and std::getline
using namespace std;

int main ()
{


    std::cout << "what is your name" << '\n';
    std::string name {};
    //std::cin >> name;
    std::getline(std::cin >> std::ws,name);  // read a full line of text into name
    // so when we use th std::cin it just reads name and stop after encounting the whitespace
    //std::ws do that it gives std::cin to ignore the take the th ewhitespace in input 

    // std::cout << "what is your age" <<'\n';
    // std::string age{};
    // //std::cin >> color;
    // std::getline(std::cin >> std::ws, age);
    int age = 25;


    int letter = static_cast<int>(name.length());
// so here the name.length() gives unsigned values and age is giving signed values so we can do add 
//operation directly to them 
    std::cout << "Your age " <<" + " << "length of name is" << letter + age << '\n';

//so the thing is we input our name and it will of only one letter without whitespace
//then this will run fine and ask next what is your favourit ecolor and proceed to do so

//but the problem is when we have a white spaces between the like uday kumar so the cin will break
//at the first whitespace it will encounter and waiting fro anouther cin and give color the value 
//of last name so it will not take input of color


// so to take the input as on eline we may use the inbulit function 
//std::getline which will tak etwo thing as input

// to know length of std::string function we use 
    std::cout << "The length of name " << name.length() <<'\n';

//Although std::string is required to be null-terminated 
//(as of C++11), the returned length of a std::string does not include the implicit null-terminator character
//Do not pass std::string by value, as it makes an expensive copy
    return 0;
}
