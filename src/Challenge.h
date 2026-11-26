#pragma once
#include <string>
using namespace std;

class challenge
{
public:
    virtual ~challenge() = default;
    virtual void run() = 0;
};
