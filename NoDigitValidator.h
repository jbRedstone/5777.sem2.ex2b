#pragma once
#include "Validator.h"

class NoDigitValidator : public Validator<string>
{
public:
    void checkValidity(string content);
};


