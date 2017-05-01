#pragma once
#include "FormValidator.h"

template <class T, class U, class V>
class SumValidator : public FormValidator<Field<int>, Field<int>, Field<int>>
{
public:
    void checkValidity(int content);
};

template <class T, class U, class V>
void SumValidator<T,U,V>::checkValidity(int content)
{
    m_valid = (m_field1.getContent() == (m_field2.getContent() + m_field3.getContent()));
}
