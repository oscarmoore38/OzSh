#include "../shellExceptionClass/shellException.hpp"
#include "util.hpp"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Constructor 
Util:: Util(){

}

// Checks inputs
void Util:: is_valid_input(int argumentCount, char* argumentValue[]){
    // Argument count check
    if (argumentCount > 2){
        throw ShellException("Error: Too many arguments provided");
    } 
}

string Util:: read_file(istream& stream){
    string content; 

    getline(stream, content);

    return content;
}