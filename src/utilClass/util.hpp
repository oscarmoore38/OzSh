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
    

    /** 
     * @brief Open the specfied file. Will throw shellException if unable
     *
     * @param fileInput - name of file (std::string)
     * 
     * @return File object of type std::ifstream  
     */ 
    ifstream open_file(const string& filename); 

    /** 
     * @brief Closes the specfied file. Will throw shellException if unable
     *
     * @param fileInput - name of file (std::string)
     * 
     * @note function does not return anything. 
     */ 
    void close_file(const string& filename); 



    
};

#endif