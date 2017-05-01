#pragma once
#include "FormValidator.h"

template <class T, class U, class V>
class RoomValidator : public FormValidator<Field<int>, Field<int>, Field<int>>
{
public:
    RoomValidator(string errorMessage,Field<int> * f1, Field<int>* f2, Field<int> * f3);
    void checkValidity();
};

template <class T, class U, class V>
RoomValidator<T,U,V>::RoomValidator(string errorMessage,Field<int>* f1, Field<int> * f2, Field<int> * f3) : FormValidator<T, U, V>(errorMessage, f1, f2, f3)
{}

template <class T, class U, class V>
void RoomValidator<T,U,V>::checkValidity()
{    
    int c1 = m_fields[0]->getContent(),
    c2 = m_fields[1]->getContent(),
    c3 = m_fields[2]->getContent();
    
    m_valid = (c1 == (c2 + c3));
    
    if(!m_valid)
    {
        for (size_t i = 0; i < 3; i++)
        {
            m_fields[i]->emptySet(true);
        }
    }
}
