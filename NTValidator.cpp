#include "NTValidator.h"

NTValidator::NTValidator()
{}

NTValidator::~NTValidator()
{}

NTValidator NTValidator::get()
{
    return *this;
}

bool NTValidator::isValid()
{
    return true;
}

void NTValidator::checkValidity()
{}
