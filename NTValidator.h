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


//#include "NTField.h"


class NTValidator
{
public:
    NTValidator ();
    ~NTValidator();
    NTValidator get();
    virtual bool isValid();
};
