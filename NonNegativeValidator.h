#pragma once
#include "Validator.h"

template <class T>
class NonNegativeValidator : public Validator<int>
{
public:
    NonNegativeValidator();
    void checkValidity(int content);
};

template <class T>
NonNegativeValidator<T>::NonNegativeValidator()
{
    m_errorMessage = "Can't use negative number";
}

template <class T>
void NonNegativeValidator<T>::checkValidity(int content)
{
    m_valid = content >= 0;
}
