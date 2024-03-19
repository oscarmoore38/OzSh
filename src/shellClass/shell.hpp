#ifndef SHELL_HPP
#define SHELL_HPP

#include "../utilClass/util.hpp"
#include "../userInterfaceClass/userInterface.hpp"
#include <string>
#include <vector>
// #include "CommandParser.h"
// #include "CommandExecutor.h"
// #include "ProcessManager.h"
// #include "SignalHandler.h"

using namespace std;

/**
 * @class Shell
 * @brief Acts as orchestrator with other classes for shell program
 *
 */
class Shell{
private:
    // Objects
    // CommandExecutor CommandExecutor; 
    // ProcessManager ProcessManager;
    // SignalHandler SignalHandler; 

    // Arrtibutes 
    vector<string> parsedInput;
    UserInterface shellUserInterface; 
    Util shellUtilityObject;

    // Private class methods 
    /** 
     * @brief Checks if a user input is valid. Will throw execption if not. 
     *
     * @param arguementCount (int) Total count of arguments passed to program by user.
     * @param argumentValue (char * []) Array of values passed to program by user.
     * 
     */
    void is_valid_input(int argumentCount, char* argumentValue[]);

    /** 
     * @brief Reads a line of input from the console.  
     *
     * @param stream stream object of type istream. 
     * 
     * @return string containing line from stream
     */
    string read_line(istream& stream);

     /** 
     * @brief Parses string into a vector of strings.  
     *
     * @param string input. 
     * 
     * @return vector<std::string>
     */
    vector<string> parse_input(const string& UserInputString);

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
     * @brief starts main loop for shell. 
     * 
     * @note This method takes no input parameters. 
     */
    void run(int argumentCount, char* argumentValue[]);


};

#endif