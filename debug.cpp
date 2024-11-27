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
std::cerr << "main() called \n";
    int  x{GetUserInput()};
std::cerr << "main::x  = " << x << "\n";
    int  y{GetUserInput()};
std::cerr << "main::y = " << y << "\n";
    int z {add(x,y)};
    PrintResult(z);
return 0;

}