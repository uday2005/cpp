#include "raindrops.h"
#include <string>
namespace raindrops {
    std::string convert(int num){
        std::string result = "";
        if (num % 3 == 0){
            result = result+"Pling";
        }
        if (num % 5  == 0){
            result = result + "Plang";
        }
        if (num % 7 == 0){
            result = result + "Plong";
        }
        if (result.empty()){
            result = std::to_string(num);
        }
        return result;
    }
}  // namespace raindrops


// so the first thing what i was doing here is i forgot the syntax of the like wwe should specify each function types
// so on the top we define convert function as std::string as we would get the ouput as string
// so  to define the function data type sw eshould see what willbe output of it


// and at last i was using else statement only and it is wrong by so that we  it will be only triggered if last if is used 
//so that is wrong so we should use  the if instesd anf some stadard part of library which i learned now is 

// two thing which i klearned now that to_string convert num to string 

// to check anything if it is empty or not then we should use .empty() method  to check if the specific variable is empty or not


// we are used to write everything in file whuch is good for small project but for th elarge project we should use differnet 
// files like the header file and the source file diffently 
