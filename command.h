#pragma once
#include <iostream>

using namespace std;

class command {

private:
    const string id;

public:
    command(string id)
        : id(id) {}

    virtual bool runCommand();

    virtual bool canRun();

    string getId() {
        return this->id;
    }

    virtual string* getAliases();

};
