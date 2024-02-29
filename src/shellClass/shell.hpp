#ifndef SHELL_HPP
#define SHELL_HPP

#include "../utilClass/util.hpp"
// #include "CommandParser.h"
// #include "CommandExecutor.h"
// #include "ProcessManager.h"
// #include "SignalHandler.h"


/**
 * @class Shell
 * @brief Creates new shell and acts as orchestrator with other classes 
 *
 */
class Shell{
private:
    // Objects
    // CommandParser CommandParser;
    // CommandExecutor CommandExecutor; 
    // ProcessManager ProcessManager;
    // SignalHandler SignalHandler; 
    // UserInterface UserInterface; 
    Util shellUtilityObject;

public: 
    // Constructor 
     /**  
     * @brief Default constructor for Shell class.
     * 
     * @note This constructor takes no input parameters.
     */
    Shell();

    // Class Methods 
    
    /** 
     * @brief Checks if a user input is valid. Will throw execption if not. 
     *
     * @param arguementCount (int) Total count of arguments passed to program by user.
     * @param argumentValue (char * []) Array of values passed to program by user.
     * 
     * @return (bool) Bool value indicating if input is valid or not.
     */
    void is_valid_input(int argumentCount, char* argumentValue[]);

    /** 
     * @brief starts main loop for shell. 
     * 
     * @note This method takes no input parameters. 
     */
    void run();
 

};

#endif