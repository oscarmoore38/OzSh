#include "userInterface.hpp"
#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <libgen.h>


using namespace std;

UserInterface:: UserInterface(){
    // Check PS1 value and username and set if needed. 
    setPrompt();
}

void UserInterface:: printPrompt(){
    std::cout << hostname << " " << cwd << prompt << " ";
}


void UserInterface:: setPrompt(){
    // Get prompt 
    if (getuid() == 0){
        prompt = " # ";
    } else {
        prompt = " % ";
    }
    
    if (gethostname(hostname, sizeof(hostname)) != 0) {
        strcpy(hostname, "unknown");
    }

    // Get the current working directory
    if (getcwd(cwd, sizeof(cwd)) == nullptr) {
        strcpy(cwd, "UNKNOWN");
    } else {
        // Extract the basename of the current working directory
        char* cwd_basename = basename(cwd);
        strcpy(cwd, cwd_basename);
    }
}