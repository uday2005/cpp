#include <iostream>
#include <string>

int GetAge()
{
    std::cout << "Enter the Age of Person: ";
    int age{};
    std::cin >> age;
    return age;
}

std::string GetName()
{
    std::cout << "Enetr the Name of the Person: ";
    std::string name {};
    std::getline(std::cin >>std::ws , name);
    return name;
}

int main()
{
    
    std::string name1 {GetName()};
    int age1 {GetAge()};

    std::string name2 {GetName()}; 
    int age2 {GetAge()};

    if (age1 > age2)
    std::cout << name1  << "(" << age1 << ")" << " older than " << name2 << "(" << age2 << ")" <<'\n';
    else
    std::cout << name2  << "(" << age2<< ")" << " older than " << name1 << "(" << age1<< ")" <<'\n';

    //so the cin jsut break at the first whitespace so go fix this we can use get line function
    return 0;
}