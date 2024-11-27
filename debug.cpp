#include <iostream>
using namespace std;

int add (int x , int y)
{
std::cerr << "add() called (x=" <<  x  << " , y = " << y  << ")\n" ;
    return x + y;
}
int GetUserInput()
{
std::cerr << "GetUserInput() called \n" ;
    std::cout << "Enter a Number";
    int x{};
    std::cin >> x;
    return x;
}
void PrintResult(int z)
{
std::cerr << "PrintResult() called (z=" << z << ")\n";
    std::cout <<  "The answer is " << z <<"\n";
}


int main()
{
int  x{GetUserInput()};
int  y{GetUserInput()};

int z {add(x,y)};
PrintResult(z);
return 0;

}