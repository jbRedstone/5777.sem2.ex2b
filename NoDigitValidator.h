#pragma once
#include "Validator.h"

class NoDigitValidator : public Validator<string>
{
public:
    NoDigitValidator();
    void checkValidity(string content);
};


