#include <iostream>
#include <string>
#include <ctime>     // for strftime()
#include <algorithm> // for stoi()
using namespace std;

int main()
{
    char charDATE[12]; // to use in the strftime() of ctime, we always need char array
    string presentDATE;
    time_t t = time(0);                                // fetches the local time of machine
    strftime(charDATE, 12, "%d/%m/%Y", localtime(&t)); // charDATE will be assigned dd/mm/yyyy date formated
    presentDATE = charDATE;                            // char to string conversion
    int dayPresent = stoi(presentDATE.substr(0, 2));   // days assignment
    int monthPresent = stoi(presentDATE.substr(3, 2)); // months assignment
    int yearPresent = stoi(presentDATE.substr(6));     // years assignment
    cout << "\n Today Date :: " << presentDATE;
    cout << "\n Date  : " << dayPresent;
    cout << "\n Month : " << monthPresent;
    cout << "\n Year  : " << yearPresent;
    return 0;
}