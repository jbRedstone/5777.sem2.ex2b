#pragma once
#include "NTValidator.h"

template <class T>
class Validator : public NTValidator
{
public:
    virtual void checkValidity(T content) {}; // set bool valid at end of function
    bool isValid(string request, T content);
protected:
    bool m_valid = false;
    string m_errorMessage = "";
};

template <class T>
bool Validator<T>::isValid(string request, T content)
{
    if (!m_valid)
        cout << "Error: " << request << ": " << content << " - " << m_errorMessage << endl;

    return m_valid;
}
