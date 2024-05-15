#include <iostream>
using namespace std;
int main()
{
    int currentDay, currentMonth, currentYear;
    int birthDay, birthMonth, birthYear;
    int ageDays, ageMonths, ageYears;
    int months[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; // days per month

    // CURRENT DATE inputs from user
    cout << "Enter Current Day (1-31) : ";
    cin >> currentDay;
    cout << "Enter Current Month (1-12) : ";
    cin >> currentMonth;
    cout << "Enter Current Year (i.e 2024) : ";
    cin >> currentYear;

    // DATE OF BIRTH from user
    cout << "\n\nEnter Birth Day (1-31) : ";
    cin >> birthDay;
    cout << "Enter Birth Month (1-12) : ";
    cin >> birthMonth;
    cout << "Enter Birth Year (i.e 2003) : ";
    cin >> birthYear;

    // LOGICAL CALCULATIONS
    if (birthYear > currentYear || birthMonth > 12 || birthMonth < 1 || birthDay > months[birthMonth] || birthDay < 1 || currentDay < 1 || currentDay > months[currentMonth] || currentMonth > 12 || currentMonth < 1 || (birthYear == currentYear && birthMonth > currentMonth))
    {
        cout << "\n\n error :: invalid user inputs\nPlease check given data carefully!\n\n";
        system("pause");
        system("clear");
        main();
    }
    else
    {
        ageYears = currentYear - birthYear;
        if (birthDay <= currentDay)
        {
            ageDays = currentDay - birthDay;
            if (birthMonth > currentMonth)
            {
                ageYears--;
                currentMonth += 12;
            }
            ageMonths = currentMonth - birthMonth;
        }
        else
        {
            if (birthMonth < currentMonth)
            {
                ageMonths = currentMonth - birthMonth;
                ageDays = (currentDay += months[currentMonth + 1]) - birthDay;
                ageMonths--;
            }
            else
            {
                ageMonths = (currentMonth += 12) - birthMonth;
                ageYears--;
                ageDays = (currentDay += months[currentMonth + 1]) - birthDay;
                ageMonths--;
            }
        }
    }
    cout << "\n\n Hello there!\n You are " << ageYears << " Years " << ageMonths << " Months & " << ageDays << " Days old :)\n\n";

    return 0;
}