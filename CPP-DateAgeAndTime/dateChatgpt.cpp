#include <iostream>
#include <ctime>
#include <chrono>
using namespace std;
int main()
{
    // Get the current system time
    time_t currentTime = chrono::system_clock::to_time_t(chrono::system_clock::now());

    // Convert to local time
    tm *localTime = localtime(&currentTime);

    // Display the current local time
    cout << "Current local time: " << asctime(localTime);

    // Find the maximum possible date
    localTime->tm_year = INT16_MAX - 1900; // Set the year to the maximum value
    localTime->tm_mon = 11;                // December
    localTime->tm_mday = 31;               // 31st day of the month

    // Convert back to time_t
    time_t maxDate = mktime(localTime);

    // Display the maximum possible date
    cout << "Maximum possible date: " << asctime(localtime(&maxDate));

    return 0;
}
