#pragma once
#include <iostream>
#include "../command.h"

using namespace std;

class HelloWorldCommand : public command {
private:
    string aliases[3];

public:
    HelloWorldCommand() :
        command("hello world") {
        this->aliases[0] = "hw";
        this->aliases[1] = "hello";
        this->aliases[2] = "hi";
    }

    string *getAliases() override {
        return aliases;
    }

    bool runCommand();

    bool canRun();
};

