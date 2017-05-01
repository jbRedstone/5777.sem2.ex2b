#pragma once
#include "Validator.h"

template <class T>
class RangeValidator : public Validator<int>
{
public:
    RangeValidator(int minYear, int maxYear);
    void checkValidity(int content);
private:
    int m_min, m_max;
};

template <class T>
RangeValidator<T>::RangeValidator(int minYear, int maxYear) : m_min(minYear), m_max(maxYear)
{
    m_errorMessage = "Year of birth out of age range";
}

template <class T>
void RangeValidator<T>::checkValidity(int content)
{
    m_valid = ((content >= m_min) && (content <= m_max));
}
