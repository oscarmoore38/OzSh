#ifndef UI_HPP
#define UI_HPP
#include <iostream>

using namespace std;

/**
 * @class UserInterface
 * @brief Creates user interface for users to interact with program. I'm choosing
 * not to use the PS1 environment variable because of the need to dynamically update
 * working directory during shell session. 
 *
 */

class UserInterface{
private: 
    char* envVarPS1;
    char cwd[1024]; 
    char hostname[256];
    string prompt;
public: 
    // class method 
    // Constructor 
     /**  
     * @brief Default constructor for Shell class. Will call setter, 
     * setPromptEnv if private attribute envVarPS1 is not set. 
     * 
     * @note This constructor takes no input parameters.
     */
    UserInterface();
    
    /** 
     * @brief Prints interactive prompt for user.  
     *
     * @note This method takes no input parameters
     */

    void printPrompt();

    /** 
     * @brief Setter for private attribute ennVarPS1 
     *
     * @note This method takes no input parameters
     */

    void setPromptEnv();

};

#endif