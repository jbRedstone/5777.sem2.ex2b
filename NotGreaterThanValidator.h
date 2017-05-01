#pragma once
#include "Validator.h"

template <class T>
class NotGreaterThanValidator : public Validator<int>
{
public:
    NotGreaterThanValidator(int limit);
    void checkValidity(int content);
private:
    int m_limit;
};

template <class T>
NotGreaterThanValidator<T>::NotGreaterThanValidator(int limit) : m_limit(limit)
{
    m_errorMessage = "More than total allowed";
}

template <class T>
void NotGreaterThanValidator<T>::checkValidity(int content)
{
    m_valid = content <= m_limit;
}
