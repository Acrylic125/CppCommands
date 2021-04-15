#pragma once

#include <iostream>
#include <unordered_map>
#include "../command.h"

using namespace std;
typedef command& COMMAND_POINTER;

class CommandExecutor {

private:
    unordered_map<string, command*> registered;

public:
    void registerCommand(COMMAND_POINTER cmd);

    void unregisterCommand(COMMAND_POINTER cmd);

    void unregisterCommand(string cmd);

    void executeAllCommands();

};
