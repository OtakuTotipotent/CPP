#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
    string date;
    cout << "Enter date (dd/mm/yyyy) : ";
    cin >> date;
    if (date.empty())
    {
        cout << "\nError: invalid date (no-entry) \n";
        exit(0);
    }
    int day, month, year;
    char dash = '-';
    day = stoi(date.substr(0, 2));
    month = stoi(date.substr(2, 2));
    year = stoi(date.substr(4));
    cout << "\nDate you entered (dd-mm-yyyy) : " << day << dash << month << dash << year << endl;
    return 0;
}