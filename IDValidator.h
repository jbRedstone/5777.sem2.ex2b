#pragma once
#include "Validator.h"

class IDValidator : public Validator<uint32_t>
{
public:
    void checkValidity(uint32_t content);
};


