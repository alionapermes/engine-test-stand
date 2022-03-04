#pragma once

#include <string>


class BaseEngine
{
public:
    virtual void
    run();

    std::string
    getName()
    { return _name; }

protected:
    std::string _name;

    int _temperature = 0;
};

