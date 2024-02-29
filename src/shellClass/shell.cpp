#include "shell.hpp"
#include "../utilClass/util.hpp"
#include "../shellExceptionClass/shellException.hpp"
#include <iostream>

using namespace std;

// constructor definiton 
Shell:: Shell(){

}

void Shell:: is_valid_input(int argumentCount, char* argumentValue[]){
    try {
        shellUtilityObject.is_valid_input(argumentCount, argumentValue);
    } catch (const ShellException& e) {
        cerr << e.what() << endl;
        exit(1);
    }
}


void Shell:: run(){
    // Print prompt 
    shellUserInterface.printPrompt();

}

