#include "IDValidator.h"

IDValidator::IDValidator()
{
    m_errorMessage = "Invalid ID";
}

void IDValidator::collectDigits(vector<int> & digits, uint32_t num)
{
    if (num > 9)
        collectDigits(digits,num/10);
    
    digits.push_back(num % 10);
}

void IDValidator::checkValidity(uint32_t content)
{
    vector<int> digits;
    
    collectDigits(digits, content);
    
    if (digits.size() != 9)
    {
        m_valid = false;
        return;
    }
    
    int sum = 0;
    
    for (size_t i = 0; i <= 7; i++)
    {
        int mult = (i%2 == 0? 1:2);
        
        sum += (digits[i]*mult);
        
        //add digit times multiplier if its a single digit number
        //if its a double digit number, it can't be greater than 20, so the sume of its digits is itself minus 9
        if ((digits[i]*mult) >= 10)
            sum -= 9;
    }
    
    m_valid = ((sum + digits[8])%10) == 0;
    
}
