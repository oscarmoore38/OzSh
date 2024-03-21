#ifndef COMMAND_EXEC_HPP
#define COMMAND_EXEC_HPP

#include <string>
#include <vector>
#include "../userInterfaceClass/userInterface.hpp"
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


    /**  
     * @brief Converts a vector of stirngs to a vector of C-Style strings. 
     * 
     * @param parsedUserInput vector of strings representing parsed user input 
     * 
     * @note method does not return anything. 
     */
    void covert_to_C_string_arr(vector<string>& parsedUserInput);


    /**  
     * @brief Handles exit command and will exit program 
     * 
     * @note method takes no input parameters and does not return anything. 
     */
    void handle_exit_command();


public: 
     /**  
     * @brief Executes command in a child process. Will throw shellExecption in error. 
     * 
     * @param parsedUserInput vector of strings representing parsed user input 
     * 
     * @return int value indicating outcome. 
     */
    int execute_command(vector<string>& parsedUserInput);

    
};




#endif