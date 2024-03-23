#include <iostream>
using namespace std;
int main()
{
    int date;
    char slash = '-';
    cout << "Enter date in yyyymmdd format : ";
    cin >> date;
    if (date <= 0)
    {
        cout << "\nError: invalid date\n";
        exit(0);
    }
    int y, m, d;
    y = date / 10000;
    date %= 10000;
    m = date / 100;
    d = date %= 100;

    cout << "\nYou entered the date in dd-mm-yyyy format as :: " << d << slash << m << slash << y << endl;
    return 0;
}