#pragma once
#include "Validator.h"

//using std::string;


class NTField
{
public:
//    NTField(){};
    NTField(string request);
//    virtual ~NTField(){};
    NTField get();
    virtual bool getValidity();
    void validSet(bool b);
    virtual void refill();
    virtual void validate();
//    virtual void addValidator();
//    virtual void addValidator();

protected:
    string m_request;
    bool m_valid;
};

//NOTES:

//A validator is of a certain type, holds the valid limits
// nameNTField           ->addValidator(nameValidator.get());
//this function must change  nameNTField->valid to true or false.
//therefore the addValidator functions will recieve different things, which will be returned by those particular Validators.

//every time a NTField is changed, the validator is not re-added, so it must give more dynamic feedback as to the acceptability of each NTField, and not just a simple bool

//the validateForm() function of the Form class recalls all validators to check the validity of their particular NTFields.
