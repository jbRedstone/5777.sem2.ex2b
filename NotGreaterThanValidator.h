#pragma once
#include "Validator.h"

template <class T>
class NotGreaterThanValidator : public Validator<int>
{
public:
    void checkValidity(int content);
};

template <class T>
void NotGreaterThanValidator<T>::checkValidity(int content)
{
    //m_valid = logic
}
