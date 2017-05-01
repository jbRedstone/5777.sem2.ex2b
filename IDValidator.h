#pragma once
#include "Validator.h"

class IDValidator : public Validator<uint32_t>
{
public:
    IDValidator();
    void checkValidity(uint32_t content);
    void collectDigits(vector<int> & digits, uint32_t num);
};


