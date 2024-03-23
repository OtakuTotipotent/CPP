#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    char charDATE[12]; // to use in the strftime() of ctime, we always need char array
    string presentDATE;
    time_t t = time(0); // fetches the local time of machine
    // charDATE will be assigned dd/mm/yyyy as a date formated by command below
    strftime(charDATE, 12, "%d/%m/%Y", localtime(&t));
    cout << charDATE << '\n';
    presentDATE = charDATE;
    cout << presentDATE << '\n';
    return 0;
}
