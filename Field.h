#pragma once
#include "NTField.h"


template <class T>
class Field : public NTField
{
public:
    Field() {};
    Field(string request);
    ~Field(){};
    T getContent() const;
    void addValidator(Validator<T>* validator);
    void refill();
    bool getValidity();
    void validate();
    void printField();
    void emptySet(bool b);
private:
    T m_content;
    Validator<T> * m_validator;
    bool m_empty = true;
};

template<class T>
void Field<T>::emptySet(bool b)
{
    m_empty = b;
}

template <class T>
Field<T>::Field(string request) : NTField(request)
{}

template <class T>
T Field<T>::getContent() const
{
    T temp = m_content;
    return temp;
}

template <class T>
void Field<T>::addValidator(Validator<T> * validator)
{
    m_validator = validator;
    validate();
}

template <class T>
void Field<T>::refill()
{
    cout << m_request << endl;
    cin >> m_content;
    m_empty = false;
    validate();
}

template <class T>
bool Field<T>::getValidity()
{
    if (m_empty)
    {
        validSet(false);
        return false;
    }
    
    validate();
    
    bool b = m_validator -> isValid(m_request, getContent());
    validSet(b);
    return b;
}

template <class T>
void Field<T>::validate()
{
    m_validator -> checkValidity(m_content);
}

template <class T>
void Field<T>::printField()
{
    if (getValidity())
        cout << m_request << ": " << *this;
}

template <class T>
std::ostream & operator << (std::ostream & ostr, const Field<T> & field)
{
    ostr << field.getContent() << endl;
    return ostr;
}
