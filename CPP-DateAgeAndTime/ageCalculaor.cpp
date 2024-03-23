#include <iostream>
#include <ctime>
#include <iomanip>

struct Date
{
    int day;
    int month;
    int year;
};

// Function to check if a year is a leap year
bool isLeapYear(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Function to calculate age
Date calculateAge(const Date &birthDate)
{
    std::time_t t = std::time(nullptr);
    std::tm *now = std::localtime(&t);

    Date currentDate;
    currentDate.day = now->tm_mday;
    currentDate.month = now->tm_mon + 1;    // tm_mon is 0-based
    currentDate.year = now->tm_year + 1900; // tm_year is years since 1900

    // Calculate age
    int ageDays = currentDate.day - birthDate.day;
    int ageMonths = currentDate.month - birthDate.month;
    int ageYears = currentDate.year - birthDate.year;

    // Adjust negative values
    if (ageDays < 0)
    {
        ageMonths--;
        int daysInPrevMonth = 30; // Defaulting to 30 days
        if (birthDate.month - 1 == 4 || birthDate.month - 1 == 6 || birthDate.month - 1 == 9 || birthDate.month - 1 == 11)
        {
            daysInPrevMonth = 30;
        }
        else if (birthDate.month - 1 == 2)
        {
            daysInPrevMonth = isLeapYear(birthDate.year) ? 29 : 28;
        }
        else
        {
            daysInPrevMonth = 31;
        }
        ageDays += daysInPrevMonth;
    }

    if (ageMonths < 0)
    {
        ageYears--;
        ageMonths += 12;
    }

    Date age;
    age.day = ageDays;
    age.month = ageMonths;
    age.year = ageYears;

    return age;
}

int main()
{
    Date birthDate;

    // Input date of birth
    std::cout << "Enter your date of birth (dd/mm/yyyy): ";
    char slash;
    std::cin >> birthDate.day >> slash >> birthDate.month >> slash >> birthDate.year;

    // Calculate and display age
    Date age = calculateAge(birthDate);
    std::cout << "Your age is: " << std::setw(2) << std::setfill('0') << age.year << "/"
              << std::setw(2) << std::setfill('0') << age.month << "/" << std::setw(2) << std::setfill('0') << age.day << std::endl;

    return 0;
}