#include "util.hpp"
#include <iostream>


// Constructor 
Util:: Util(){

}

// Checks inputs
bool Util:: is_valid_input(int argumentCount, char* argumentValue[]){
    // Argument count check
    if (argumentCount > 2){
        std::cerr << "Too many arguments." << std::endl;
        return false;
    } else if (argumentCount < 2){
        std::cerr << "Too few arguments." << std::endl;
        return false;
    }

    return true;
    
}