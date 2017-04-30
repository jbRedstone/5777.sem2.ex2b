#pragma once
#include "Validator.h"

template <class T>
class RangeValidator : public Validator<int>
{
public:
    RangeValidator(int bigAge, int littleAge) {};
    void checkValidity(int content);
};

template <class T>
void RangeValidator<T>::checkValidity(int content)
{
    //m_valid = logic
}
