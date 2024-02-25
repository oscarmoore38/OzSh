#ifndef UTIL_H
#define UTIL_H


/**
 * @class Util
 * @brief A simple class that provdies helper functions to other classes
 *
 */
class Util{
private:

public: 
    //Constructor 
    /**  
     * @brief Default constructor for Util class.
     * 
     * @note This constructor takes no input parameters.
     */
    Util();
    
    // methods 
    /** 
     * @brief if a users input is valid.
     *
     * @param arguementCount (int) Total count of arguments passed to program by user.
     * @param argumentValue (char * []) Array of values passed to program by user.
     * 
     * @return (bool) Bool value indicating if input is valid or not.
     */
    bool is_valid_input(int argumentCount, char* argumentValue);
    
};

#endif