#ifndef COMMAND_EXEC_HPP
#define COMMAND_EXEC_HPP

#include <string>
#include <vector>
// Note to include ProcessMaanager class when implemented

using namespace std; 


/**
 * @class CommandExecutor 
 * @brief Executes systems commands for shell program
 *
 */
class CommandExecutor{
private: 
// Attributes 
    vector<const char*> cStringArrParsedUserInput; // execvp expects an array of C-style strings. 
    int exitStatus; 

public: 
    // Constructor 
     /**  
     * @brief Default constructor for CommandExecutor class.
     * 
     * @param parsedUserInput vector of strings representing parsed user input 
     * 
     * @note function does not return anything. 
     */
    CommandExecutor(vector<string>& parsedUserInput);


     /**  
     * @brief Executes command in a child process. Will throw shellExecption in error. 
     * 
     * @note Takes no parameters. 
     * 
     * @return int value indicating outcome. 
     */
    int execute_command();

    
};




#endif