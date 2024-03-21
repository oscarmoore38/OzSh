#include "commandExecutor.hpp"
#include "../shellExceptionClass/shellException.hpp"
#include <iostream>
#include <vector>
#include <unistd.h>   
#include <sys/wait.h> 


using namespace std;


void CommandExecutor:: covert_to_C_string_arr(vector<string>& parsedUserInput){
    // Converts parsedUserInput into a C-style string. 

    for (const auto& input : parsedUserInput) {
        cStringArrParsedUserInput.push_back(input.c_str());
        }
    
    cStringArrParsedUserInput.push_back(nullptr); // Add a null terminator
};


void CommandExecutor::handle_exit_command() {
    // Clean up resources, will add history here once scope increases
    cout << "Exiting shell..." << endl;
    exit(0);
};


int CommandExecutor:: execute_command(vector<string>& parsedUserInput){
    // clear vector from previous call. 
    cStringArrParsedUserInput.clear();

    // Convert C++ strings to C-Style strings. 
    covert_to_C_string_arr(parsedUserInput);

    // FOR TESTING - WILL REMOVE 
    for (const char* cString : cStringArrParsedUserInput) {
        // Check if the current element is nullptr
        if (cString == nullptr) {
            // If it is, break out of the loop
            break;
        }
        // Print the C-style string
        std::cout << cString << std::endl;
    }
    
    // Handle built-in commands
    if (parsedUserInput[0] == "cd") { 
        if (parsedUserInput.size() != 2) {
            throw ShellException("Usage: cd <directory>");
        }else{ // Attempt to change dir 
           if (chdir(cStringArrParsedUserInput[1]) != 0) {
                throw ShellException("Error: Failed to change directory.");
            }
        } 
    } else if (parsedUserInput[0] == "exit") {
        handle_exit_command(); 
    } else { // Spawn new child process for everything else. 
        pid_t pid = fork(); 

        if (pid < 0) {
            throw ShellException("Error: Fork failed.");
        } else if (pid == 0) {
            execvp(cStringArrParsedUserInput[0], const_cast<char* const*>(cStringArrParsedUserInput.data()));

            // Error handling for execvp
            throw ShellException("Error: Exec failed.");
            
        } else {
            // Wait for the child process to finish
            waitpid(pid, &exitStatus, 0); 
            if (WIFEXITED(exitStatus)) {
                cout << "Child process exited with status: " << WEXITSTATUS(exitStatus) << endl;
            } else {
                throw ShellException("Error: Child process exited abnormally.");
            }
        }
    }
    return 0;
};