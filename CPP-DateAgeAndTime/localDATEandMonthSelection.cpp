#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string presentDATE = "Mar 23 2004";
    // string presentDATE = __DATE__;
    string monthOnly = presentDATE.substr(0, 3);
    int dayOnly = stoi(presentDATE.substr(4, 3));
    int yearOnly = stoi(presentDATE.substr(6));
    cout << "\n Today Date :: " << presentDATE;
    cout << "\n Date  : " << dayOnly;
    cout << "\n Month : " << monthOnly;
    cout << "\n Year  : " << yearOnly;
    string monthNumber[] = {"", "jan", "feb", "mar", "apr", "may", "jun", "jul", "aug", "sep", "oct", "nov", "dec"};
    string tempMonthOnly = monthOnly;
    transform(tempMonthOnly.begin(), tempMonthOnly.end(), tempMonthOnly.begin(), ::tolower);
    for (int mNo = 0; mNo < 13; mNo++)
    {
        if (monthNumber[mNo].find(tempMonthOnly) < 10)
            cout << "\nThe month number is : " << mNo << endl;
    }
    return 0;
}