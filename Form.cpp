#include "Form.h"

void Form::addField(NTField* field)
{
    field -> validate();
    m_fields.push_back(field);
}

void Form::addValidator(NTValidator * validator)
{
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
}

bool Form::validateForm()
{
    bool validity = true;
    
    for (size_t i = 0; i < m_fields.size(); i++)
        validity = validity && m_fields[i]->getValidity();
    
    //FIXME: add condition for invalid form
    
    for (size_t i = 0; i < m_validators.size(); i++)
    {
        m_validators[i] -> checkValidity();
        validity = validity && m_validators[i]->isValid();
    }
    
    return validity;
}

NTField * Form::getField(size_t i) const
{
    return m_fields[i];
}

ostream & operator<< (ostream & ostr, const Form & form)
{
    for (size_t i = 0; i < form.numOfFields(); i++)
    {
        form.getField(i) -> printField();
    }

    return ostr;
}

