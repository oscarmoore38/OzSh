#include <iostream>
#include "shellClass/shell.h"
#include "utilClass/util.h"


int main(int argc, char* argv[]){
    // Validate inputs
    Util shellUtil; 

    bool isValidInput = shellUtil.is_valid_input(argc, argv);

    if (isValidInput) {
        std::cout << "Valid input - creating new shell" << std::endl;

    } else {
        std::cout << "invalid input - exiting" << std::endl;
    }


    // Create new shell
    // Shell newShell; 

    // newShell.run(); 

    return 0; 
}