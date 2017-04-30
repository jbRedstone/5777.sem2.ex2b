#pragma once
#include "Validator.h"

template <class T>
class RoomValidator : public Validator<int>
{
public:
    void checkValidity(int content);
};

template <class T>
void RoomValidator<T>::checkValidity(int content)
{
    //m_valid = logic
}
