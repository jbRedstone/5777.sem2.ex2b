#pragma once
#include "Validator.h"

template <class T>
class DateValidator : public Validator<int>
{
public:
    void checkValidity(int content);
};

template <class T>
void DateValidator<T>::checkValidity(int content)
{
    //m_valid = logic
}
