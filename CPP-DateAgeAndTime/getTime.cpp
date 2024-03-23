#include <iostream>
#include <ctime>   // for method 1
#include <cstring> // for method 2
#include <time.h>  // for method 2
using namespace std;
int main()
{
    //  METHOD --- 1
    char charTime[80];
    string date;
    time_t onlyTime;
    onlyTime = time(0);
    strftime(charTime, 80, "%d/%m/%y", localtime(&onlyTime));
    date = charTime;
    cout << "\n The current date :\t" << date << endl;

    //  METHOD --- 2
    // CString strTime;
    // CTime date;
    // date = GetCurrentTime();
    // strTime = date.Format(_T("%m/%d/%Y"));

    // CDateTimeCtrl m_DateTimeCtrl;
    // m_DateTimeCtrl.SetFormat(_T("MM/dd/yyyy"));

    return 0;
}