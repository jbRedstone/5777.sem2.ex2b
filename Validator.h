#pragma once
#include "NTValidator.h"

template <class T>
class Validator : public NTValidator
{
public:
    virtual void checkValidity(T content) {}; // set bool valid at end of function
//    void checkValidity(NTField field);
//    Validator get() {return *this;};
    bool isValid();
protected:
    bool m_valid = false;
    string m_errorMessage;
};

template <class T>
bool Validator<T>::isValid()
{
    if (!m_valid)
        cout << m_errorMessage << endl;

    return m_valid;
}
