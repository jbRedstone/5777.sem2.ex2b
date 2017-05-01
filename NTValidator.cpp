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
    cout << "check at NT" << endl;
    return true;
}
