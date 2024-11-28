#include <iostream>
#include <string>
#include <string_view>

// std::string getName()
// {
//     std::string s { "Alex" };
//     return s;
// }

int main()
{
//   std::string_view name { getName() }; // name initialized with return value of function
//   std::cout << name << '\n'; // undefined behavior

  //Return values are temporary objects that are destroyed at the end of the full expression containing the function call. 
  //We must either use this return value immediately, or copy it to use later

  //Modifying a std::string invalidates all views into that std::string


//Because std::string_view is a view, it contains functions that let us modify our view by “closing the curtains”.
//This does not modify the string being viewed in any way, just the view itself.

//The remove_prefix() member function removes characters from the left side of the view.
//The remove_suffix() member function removes characters from the right side of the view.

std::string_view why {"Udayyes"};
std::cout << why << '\n';

why.remove_prefix(1);
std::cout << why <<'\n';

why.remove_suffix(2);
std::cout << why <<'\n';

return 0;
}