#ifndef SIGHAN_HPP
#define SIGHAN_HPP

#include <iostream>
#include <csignal>

using namespace std;

class SignalHandler {
public:
    static void registerSignalHandlers() {
        signal(SIGINT, handleSignal); 
        signal(SIGTERM, handleSignal); 
    }

    static void handleSignal(int signal) {
        exit(signal); 
    }
};
#endif