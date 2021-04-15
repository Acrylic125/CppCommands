#include "CommandExecutor.h"

void CommandExecutor::registerCommand(COMMAND_POINTER command) {
    this->registered[command.getId()] = &command;
}

void CommandExecutor::unregisterCommand(COMMAND_POINTER command) {
    this->registered.clear();
}

void CommandExecutor::unregisterCommand(string command) {
    this->registered.clear();
}

void CommandExecutor::executeAllCommands() {
    for (const auto &item : this->registered) {
        item.second->runCommand();
    }
}
