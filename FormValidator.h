#pragma once
#include "Validator.h"

template <class T, class U, class V>
class FormValidator : public Validator<int>
{
public:
    FormValidator(){};
    FormValidator(string errorMessage, Field<int> * f1, Field<int> * f2,Field<int> * f3);
    bool isValid();
protected:
    vector<Field<int> *> m_fields;
};

template <class T, class U, class V>
FormValidator<T,U,V>::FormValidator(string errorMessage, Field<int> * f1, Field<int> * f2, Field<int> * f3)
{
    m_fields.push_back(f1);
    m_fields.push_back(f2);
    m_fields.push_back(f3);
    m_errorMessage = errorMessage;
}

template <class T, class U, class V>
bool FormValidator<T,U,V>::isValid()
{
    if (!m_valid)
        cout << "Error: " << m_errorMessage << endl;
    
    return m_valid;
}
