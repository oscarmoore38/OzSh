#include "userInterface.hpp"
#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <libgen.h>


using namespace std;

UserInterface:: UserInterface(){
    // Check PS1 value and username and set if needed. 
    envVarPS1 = getenv("PS1");
    if (envVarPS1 == nullptr){
        setPromptEnv();
    }
}

void UserInterface:: printPrompt(){
    cout << envVarPS1;
}


void UserInterface:: setPromptEnv(){
    // Get prompt
    string prompt; 
    if (getuid() == 0){
        prompt = " # ";
    } else {
        prompt = " $ ";
    }
    
    // Get the current hostname
    char hostname[256]; 
    if (gethostname(hostname, sizeof(hostname)) != 0) {
        // If unable to retrieve the hostname, display a default value
        strcpy(hostname, "unknown");
    }

    // Get the current working directory
    char cwd[1024]; 
    if (getcwd(cwd, sizeof(cwd)) == nullptr) {
        // If unable to retrieve the working directory, display a default value
        strcpy(cwd, "UNKNOWN");
    } else {
        // Extract the basename of the current working directory
        char* cwd_basename = basename(cwd);
        strcpy(cwd, cwd_basename);
    }

    // Set the PS1 environment variable
    setenv("PS1", (string(hostname) + " " + string(cwd) + prompt).c_str(), 0);
    
    envVarPS1 = getenv("PS1");

}