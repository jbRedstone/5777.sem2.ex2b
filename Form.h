#pragma once
//#include "NTField.h"
#include "Field.h"


class Form
{
public:
    void addField(NTField * field); // adds field to the vector
    void fillForm(); // allows the filling of empty or invalid fields in the form
    bool validateForm(); // returns true if the form is valid
    size_t numOfFields() const;
    NTField * getField(size_t i) const;
    void addValidator(NTValidator * validator); // adds validator to the vector

private:
    vector<NTField *> m_fields;
    vector<NTValidator *> m_validators;
};

ostream & operator<< (ostream & ostr, const Form & form);
