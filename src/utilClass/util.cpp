#include "../shellExceptionClass/shellException.hpp"
#include "util.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <unistd.h> 


using namespace std;

// Constructor 
Util:: Util(){}

ifstream Util:: open_file(const string& filename){
    std::ifstream file(filename);
    if (!file.is_open()) { 
        throw ShellException("Error: Unable to open file");
    }
    
    return file;
}


