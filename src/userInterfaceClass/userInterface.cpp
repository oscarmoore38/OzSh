#include "userInterface.hpp"
#include <iostream>
#include <cstdlib>
#include <unistd.h>

using namespace std;

UserInterface:: UserInterface(){
    // Check PS1 value and set if needed. 
    envVarPS1 = getenv("PS1");
    if (envVarPS1 == nullptr){
        setPromptEnv();
    }
}

void UserInterface:: printPrompt(){
    cout << envVarPS1 << endl;
}


void UserInterface:: setPromptEnv(){
    // Root user 
    if (getuid() == 0){
        setenv("PS1", "# ", 0);
    } else {
        setenv("PS1", "$ ", 0);
    }
    envVarPS1 = getenv("PS1");
}