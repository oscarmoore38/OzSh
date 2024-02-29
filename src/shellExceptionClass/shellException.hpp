#ifndef SHELLEXCEPTION_HPP
#define SHELLEXCEPTION_HPP

#include <stdexcept>
#include <string>

/**
 * @class ShellException
 * @brief Custom exceptions for shell functions. 
 *
 */
class ShellException : public std::exception {
private:
    std::string errorMessage;


public: 
    // Constructor
    ShellException(const std:: string& message) : errorMessage(message) {}
    // Class Methods 


    /** 
     * @brief Returns an error message associated with exception.
     * 
     * @note This method takes no input parameters.
     *  
     * @return error message.
     */
    const char* what()const noexcept override {
        return errorMessage.c_str();
    }

    
};

#endif