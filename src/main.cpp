#include <iostream>
#include "shellClass/shell.hpp"

using namespace std;

int main(int argc, char* argv[]){
    Shell programShell; 

    // run shell 
    programShell.run(argc, argv);

    return 0; 
}