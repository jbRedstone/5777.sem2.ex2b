#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <cstdint>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::ostream;

class NTValidator
{
public:
    NTValidator ();
    ~NTValidator();
    NTValidator get();
    virtual bool isValid();
    virtual void checkValidity();
};
