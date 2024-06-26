#include "shell.hpp"
#include "../utilClass/util.hpp"
#include "../shellExceptionClass/shellException.hpp"
#include "../CommandExecutorClass/commandExecutor.hpp"
#include "../signalHandlerClass/signalHandler.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>


using namespace std;

// constructor definiton 
Shell:: Shell(){}

void Shell:: is_valid_input(int argumentCount, char* argumentValue[]){
    if (argumentCount > 1){
        throw ShellException("Error: Too many arguments provided");
    }    
}


string Shell:: read_line(istream& stream){
    std::string line;
    std::getline(stream, line);
    return line;
}


vector<string> Shell:: parse_input(const string& UserInputString) {
    vector<string> words;
    istringstream iss(UserInputString);
    string word;

    while (iss >> word) {
        words.push_back(word);
    }

    return words;

}

void Shell:: run(int argumentCount, char* argumentValue[]){
    SignalHandler::registerSignalHandlers();
    cout << "Running application. Press Ctrl+C to exit." << endl; 

    // Check valid args
    try {
        is_valid_input(argumentCount, argumentValue);
    } catch (const ShellException& e) {
        cerr << e.what() << endl;
        exit(1);
    }

    for (;;){
        // Prompt and collect input. 
        shellUserInterface.printPrompt();

        // Read and parse user input. 
        parsedInput = parse_input(read_line(cin)); 

        // Try to execute command if input provided.  
        if (parsedInput.size() != 0){
            try
            {
                shellExecutor.execute_command(parsedInput);
            }
            catch(const ShellException& e)
            {
                cerr << e.what() << endl;
            }
            // Update prompt if cd called 
            if(parsedInput[0] == "cd"){
                shellUserInterface.setPrompt();
            }
        }
    }
    return;
}

