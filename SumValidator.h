#pragma once
#include "Validator.h"

template <class T>
class SumValidator : public Validator<int>
{
public:
    void checkValidity(int content);
};

template <class T>
void SumValidator<T>::checkValidity(int content)
{
    //m_valid = logic
}
