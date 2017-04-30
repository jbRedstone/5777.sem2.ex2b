#pragma once
#include "NTField.h"


template <class T>
class Field : public NTField
{
public:
    Field() {};
    Field(string request);
    ~Field(){};
    T getContent();
    void addValidator(Validator<T>* validator);
    void refill();
    bool getValidity();
    void validate();
private:
    T m_content;
    Validator<T> * m_validator;
    bool m_empty = true;
};

template <class T>
Field<T>::Field(string request) : NTField(request)
{
//    cin >> m_content;
//    m_empty = false;
}

template <class T>
T Field<T>::getContent()
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
    
    bool b = m_validator -> isValid();
    validSet(b);
    cout << b << endl;
    return b;
}

template <class T>
void Field<T>::validate()
{
    m_validator -> checkValidity(m_content);
}

template <class T>
std::ostream & operator << (std::ostream & ostr, const Field<T> & field)
{
//    cout << "field print called" << endl;
    string content;
    //FIXME: getContent;
    ostr << (field.getValidity() ? field.getContent() : "Error: Invalid Field!") << endl;
    return ostr;
}







//template <>
//class Field<string> : public Field
//{
//public:
//private:
//    string m_content;
//}
