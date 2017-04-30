#include "NoDigitValidator.h"

void NoDigitValidator::checkValidity(string content)
{
    m_valid = !(std::any_of(content.begin(), content.end(), ::isdigit));
}
