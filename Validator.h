#pragma once
#include "NTValidator.h"

template <class T>
class Validator : public NTValidator
{
public:
    virtual void checkValidity(T content) {}; // set bool valid at end of function
//    void checkValidity(NTField field);
//    Validator get() {return *this;};
    bool isValid() {return m_valid;};
protected:
    bool m_valid = false;
};

