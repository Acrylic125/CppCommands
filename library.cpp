#include "library.h"
#include "impl/simplecommands.h"
#include "executor/CommandExecutor.h"

#include <iostream>

CommandExecutor commandExecutor;

int main() {
    std::cout << "Hello, World!" << std::endl;
    HelloWorldCommand helloWorldCommand;
    commandExecutor.registerCommand(helloWorldCommand);
    commandExecutor.executeAllCommands();
    return 0;
}
