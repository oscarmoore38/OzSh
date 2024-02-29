#include <iostream>
#include "shellClass/shell.hpp"

using namespace std;

int main(int argc, char* argv[]){
    Shell programShell; 

    // Validate inputs before creating shell 
    programShell.is_valid_input(argc, argv);

    // run shell 
    programShell.run();

    return 0; 
}