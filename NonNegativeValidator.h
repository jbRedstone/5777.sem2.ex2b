#pragma once
#include "Validator.h"

template <class T>
class NonNegativeValidator : public Validator<int>
{
public:
    void checkValidity(int content);
};

template <class T>
void NonNegativeValidator<T>::checkValidity(int content)
{
    //m_valid = logic
}
