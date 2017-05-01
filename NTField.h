#pragma once
#include "Validator.h"

class NTField
{
public:
    NTField(string request);
    NTField get();
    virtual bool getValidity();
    void validSet(bool b);
    virtual void refill();
    virtual void validate();
    virtual void printField();
protected:
    string m_request;
    bool m_valid;
};
