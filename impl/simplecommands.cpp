#include "simplecommands.h"

bool HelloWorldCommand::runCommand() {
    cout << "Hello World!" << endl;
    return true;
}

bool HelloWorldCommand::canRun() {
    return true;
}