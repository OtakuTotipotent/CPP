// This program will handle the input type mistakes, i.e integer limits and characters like alphabets will not cause infinite loops
#include <iostream>
#include <limits>
using namespace std;

int main()
{
    int x = 0;
    while (x > -1)
    {
        cout << "\nEnter a number : ";
        if (!(cin >> x))
        {
            cout << "\ninvalid input";
            cin.clear();                                         // handles numeric overflow
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // handles characters overflow
            continue;
        }
        cout << "You entered : " << x;
    }
    cout << "\n\n~ Program exited successfully\n\n";

    return 0;
}