#pragma once
#include "Validator.h"

template <class T, class U, class V>
class FormValidator : public Validator<int>
{
public:
    FormValidator(){};
    FormValidator(string errorMessage, const T & f1, const U & f2, const V & f3);
protected:
    T m_field1;
    U m_field2;
    V m_field3;
};

template <class T, class U, class V>
FormValidator<T,U,V>::FormValidator(string errorMessage, const T & f1, const U & f2, const V & f3) : m_field1(f1), m_field2(f2), m_field3(f3)
{
    m_errorMessage = errorMessage;
}

