#ifndef SHELL_HPP
#define SHELL_HPP

// #include "CommandParser.h"
// #include "CommandExecutor.h"
// #include "ProcessManager.h"
// #include "SignalHandler.h"
// #include "UserInterface.h"

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

public: 
    // Constructor 
     /**  
     * @brief Default constructor for Shell class.
     * 
     * @note This constructor takes no input parameters.
     */
    Shell();

    /** 
     * @brief starts main loop for shell. 
     * 
     * @note This method takes no input parameters. 
     */
    void run();

};

#endif