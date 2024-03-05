#ifndef UI_HPP
#define UI_HPP


/**
 * @class UserInterface
 * @brief Creates user interface for users to interact with program. 
 *
 */

class UserInterface{
private: 
    char* envVarPS1;
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