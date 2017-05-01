#include "NoDigitValidator.h"
#include <algorithm>
NoDigitValidator::NoDigitValidator()
{
    m_errorMessage = "Can't be negative";
}

void NoDigitValidator::checkValidity(string content)
{
    m_valid = !(std::any_of(content.begin(), content.end(), ::isdigit));
}
