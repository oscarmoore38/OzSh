#include "commandExecutor.hpp"
#include "../shellExceptionClass/shellException.hpp"
#include <iostream>
#include <vector>
#include <unistd.h>   
#include <sys/wait.h> 


using namespace std;

CommandExecutor:: CommandExecutor(vector<string>& parsedUserInput){
    // Converts parsedUserInput into a C-style string. 

    for (const auto& input : parsedUserInput) {
        cStringArrParsedUserInput.push_back(input.c_str());
        }
    
    cStringArrParsedUserInput.push_back(nullptr); // Add a null terminator

}


int CommandExecutor:: execute_command(){
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
        return 0;
    }
};