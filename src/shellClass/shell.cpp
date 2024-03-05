#include "shell.hpp"
#include "../utilClass/util.hpp"
#include "../shellExceptionClass/shellException.hpp"
#include <iostream>
#include <string>

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


void Shell:: run(int argumentCount, char* argumentValue[]){
    // Check valid args
    is_valid_input(argumentCount, argumentValue);

    for (;;){
        // Print prompt 
        shellUserInterface.printPrompt();

        // Get user input - read from provided file or std::cin 
        if(argumentCount == 2){
            ifstream file(argumentValue[1]);
            userInput = shellUtilityObject.read_file(file);
        } else {
            userInput = shellUtilityObject.read_file(cin);
        
        }

        cout << "You entered: " << userInput << endl; 
    }
    
    return;
}

