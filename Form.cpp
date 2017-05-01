#include "Form.h"



void Form::addField(NTField* field)
{
    field -> validate();
    m_fields.push_back(field);
}

void Form::addValidator(NTValidator * validator)
{

    
//    WRITEME: check validator before pushing it...
    
//    for (size_t i = 0; i < m_fields.size(); i++)
//        if (dynamic_cast<<#type#>>(<#expression#>))m_fields[i]->
    
        m_validators.push_back(validator);

}

size_t Form::numOfFields() const
{
    return m_fields.size();
}

void Form::fillForm()
{
    string content;
    
    for (size_t i = 0; i < m_fields.size(); i++)
    {
        if (!m_fields[i] -> getValidity())
        {
            m_fields[i] -> refill();
        }
    }
    
    //FIXME: add condition for invalid form
}

bool Form::validateForm()
{
    bool validity = true;
    
    for (size_t i = 0; i < m_fields.size(); i++)
        validity = validity && m_fields[i]->getValidity();
    
//    for (size_t i = 0; i < m_validators.size(); i++)
//        validity = validity && m_validators[i]->isValid();
    
    return validity;
}

const NTField * Form::getField(size_t i) const
{
    return m_fields[i];
}

ostream & operator<< (ostream & ostr, const Form & form)
{
    cout << "form << called" << endl;
    
    for (size_t i = 0; i < form.numOfFields(); i++)
    {
        ostr << "form print called" << form.getField(i) << endl;
    }
    
    //FIXME: add condition for not print if invalid form
    
    return ostr;
}

