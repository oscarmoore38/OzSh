#include "util.hpp"
#include <iostream>
#include "../shellExceptionClass/shellException.hpp"


// Constructor 
Util:: Util(){

}

// Checks inputs
void Util:: is_valid_input(int argumentCount, char* argumentValue[]){
    // Argument count check
    if (argumentCount > 1){
        throw ShellException("Error: Too many arguments provided");
    } 
}