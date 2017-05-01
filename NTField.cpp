#include "NTField.h"

NTField::NTField(string request) : m_request(request)
{}

void NTField::validSet(bool b) 
{
    m_valid = b;
}

NTField NTField::get()
{
    return *this;
}

bool NTField::getValidity()
{
    return true;
}

void NTField::refill()
{}

void NTField::validate()
{}

void NTField::printField()
{}
