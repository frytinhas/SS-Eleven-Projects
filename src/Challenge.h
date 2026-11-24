#pragma once
#include <string>
using namespace std;

class Challenge
{
public:
    virtual ~Challenge() = default;
    virtual string Run() = 0;
};
