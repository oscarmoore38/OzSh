#ifndef UTIL_HPP
#define UTIL_HPP

#include "util.hpp"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;


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
     */
    void is_valid_input(int argumentCount, char* argumentValue[]);

    /** 
     * @brief Reads from specfied file. If no file is specified, it will read from std::cin
     *
     * @param fileInput - pointer ot a file. Default is nullptr
     * 
     * @return string containing contents of file. 
     */
    std::string read_file(istream& stream);
    
};

#endif