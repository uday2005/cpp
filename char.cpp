#include <iostream>
int main(){
    char ch{};
    std::cin >>ch ;
    std::cout << "you have put " << ch  << "\n";

//so if we do write mare than one character in input
// of char then input get overload and next character goes to next cin 

    std::cin >>ch;
    std::cout << "you have put " << ch << "\n";
}