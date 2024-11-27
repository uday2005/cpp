#include <iostream>  // for std::cout
using namespace std;

/// @brief 
void variable()
{
    std::cout<< "hi sweety how are you";

}

 
int main()
{
//     std::cout << "hello world";
//     std::cout << "Hi uday how are you";
//     cout << "Hi baby";
//     int a;
//     int b;

//     int a,b;

//     double a,b;

//     return 0;

// int width; // assigning the variable
// width = 5;

// std::cout << width  << endl;

// width = 7; // asigning again the variable

// std::cout << width << endl;


// int width{9};  // these two lines of code is coonected into one code
// // like define variable width and assign it to 9
// std::cout << width << endl;

// // Assignment (=) is used to assign a value to a variable.
// //  Equality (==) is used to test whether two operands are equal in value.


// int a;         // default-initialization (no initializer)

// // Traditional initialization forms:
// int b = 5;     // copy-initialization (initial value after equals sign)
// int c ( 6 );   // direct-initialization (initial value in parenthesis)

// Modern initialization forms (preferred):
// int d { 7 };   // direct-list initialization (initial value in braces)
// int f {};   

//list intiallization direct is most efficient and it  is  most used right now as it is disallowing the conversion of float to int

// int a,b ; // creat ethe varaibles  only no initialise 

// int a{5},b{7}; // direct intialisation after value creation

// std::cout << a << endl << b << endl;

// int a = 5, b = 6;          // copy-initialization
// int c( 7 ), d( 8 );        // direct-initialization
// int e { 9 }, f { 10 };     // direct-list-initialization
// int i {}, j {};            // value-initialization


// std::cout << "Hello world" << endl;

// std::cout << 4 << endl;

// std::cout << "Hello" << "World"  << std::endl;

// int p {9}; // intialise and assign the value 
// std::cout << "p is equal to : " << p <<  std::endl;


// std::cout << "Hi  \n" ;
// std::cout << "My name is Uday \n";

// // "\n" or '\n' is used for newline and it is more fast for newline creation than std::endl
// // "\n" it is backslash n not the forward slash n

// std::cout << "What is your number \n" ;
// int a{} ;
// std::cin >> a ;
// std::cout << "your number is " << a << std::endl;

    // std::cout << "Enter a number: "; // ask user for a number

    // int x{};       // define variable x to hold user input (and value-initialize it)
    // std::cin >> x; // get number from keyboard and store it in variable x

    // std::cout << "You entered " << x << '\n';
    // return 0;


// std::cout << "enter two number with a space between them" ;

// int x{};
// int y{};

// std::cin >> x >> y;
// std::cout << "the number is " << x << " and " << y << '\n';

    // std::cout << "Enter two numbers: ";

    // int x{};
    // std::cin >> x;

    // int y{};
    // std::cin >> y;

    // std::cout << "You entered " << x << " and " << y << '\n';
    // //if we write here like not integers in x and y then then int variable will be automatically assign to zero

    std::cout << "Enter three number with a space" ;

    int x{},y{},z{};
    std::cin >> x >> y >> z;

    std::cout << "The number is " << x << ", " << y << ", and " <<z;


}







