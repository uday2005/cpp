#include <iostream>
#include <string>  // for std::string
#include <string_view>  //for std::string_view
//int x { 5 }; // x makes a copy of its initializer
//std::string s{ "Hello, world!" }; // s makes a copy of its initializer

//when s is initialized, the C-style string literal "Hello, world!" is 
//copied into memory allocated for std::string s. Unlike fundamental types, initializing and copying a std::string is slow

//all we do with s is print the value to the console, 
//and then s is destroyed. We’ve essentially made a copy of “Hello, world!” 
//just to print and then destroy that copy

//Prefer std::string_view over std::string when you need a read-only string, especially for function parameters.

int main ()
{
// THE Good thing about std::string_view is it can be intialsed with c styled string
// or with std::string or with aouther std::string_view
    std::string_view s1 {"Hello World"}; // intilalsed with c style string 
    std::cout << s1 <<'\n';

    std::string s{"Hello world"};
    std::string_view s2 {s};
    std::cout << s2 <<'\n';

    std::string_view s3 {s2};
    std::cout << s3 << '\n';


    using namespace std::string_literals;      // access the s suffix
    using namespace std::string_view_literals; // access the sv suffix

    std::cout << "foo\n";   // no suffix is a C-style string literal
    std::cout << "goo\n"s;  // s suffix is a std::string literal
    std::cout << "moo\n"sv; // sv suffix is a std::string_view literal

//Unlike std::string, std::string_view has full support for constexpr:
//This makes constexpr std::string_view the preferred choice when string symbolic constants are needed.

//Viewing is inexpensive. As a viewer, you have no 
//responsibility for the objects you are viewing, but you also have no control over those objects

//Because std::string makes its own copy of the value, it doesn’t have to worry about what happens after 
//initialization is finished. The initializer can be destroyed, or modified, and it doesn’t affect the std::string. 
//The downside is that this independence comes with the cost of an expensive copy

//std::string_view is best used as a read-only function parameter

return 0;
}