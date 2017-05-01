#pragma once
#include "Validator.h"

template <class T>
class DateValidator : public Validator<int>
{
public:
    DateValidator();
    void checkValidity(int content);
    int currentYear();
    int currentMonth();
    int currentDay();
};

template <class T>
DateValidator<T>::DateValidator()
{
    m_errorMessage = "This date has passed";
}

template <class T>
void DateValidator<T>::checkValidity(int content)
{
    
    int day = content / 1000000;
    int month = (content - (day*1000000)) / 10000;
    int year = content - (day*1000000) - (month*10000);
    
    if (year > currentYear())
    {
        m_valid = true;
        return;
    }
    else if (year == currentYear())
    {
        if (month > currentMonth())
        {
            m_valid = true;
            return;
        }
        else if (month == currentMonth())
        {
            if (day >= currentDay())
            {
                m_valid = true;
                return;
            }
        }
    }
    
    m_valid = false;
}

template <class T>
int DateValidator<T>::currentYear()
{
    using clock = std::chrono::system_clock;
    auto now = clock::to_time_t(clock::now());
    std::tm calendarTime = {};
    localtime_s(&calendarTime, &now);
    return calendarTime.tm_year + 1900;
}

template <class T>
int DateValidator<T>::currentMonth()
{
    using clock = std::chrono::system_clock;
    auto now = clock::to_time_t(clock::now());
    std::tm calendarTime = {};
    localtime_s(&calendarTime, &now);
    return calendarTime.tm_mon;
}

template <class T>
int DateValidator<T>::currentDay()
{
    using clock = std::chrono::system_clock;
    auto now = clock::to_time_t(clock::now());
    std::tm calendarTime = {};
    localtime_s(&calendarTime, &now);
    return calendarTime.tm_mday;
}
