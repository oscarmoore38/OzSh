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
     * @brief Default constructor for Shell class.
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

    void setPromptEnv();

};

#endif