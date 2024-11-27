#include <iostream>

int main()
{   
    int x{};
    std::cout << "enter an integer"  << "\n";
    std::cin >> x;

    if (x == 0)
    std::cout << "both are euqal"  << "\n";
    else
    std::cout << "both are not equal" << "\n";

    return 0;
//if statement execuets only single condition

}

