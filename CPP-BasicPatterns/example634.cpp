// 1 -4 7 -10 13 -16 19 -22 . . . . . . . . . -40
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter range : ";
    cin >> n;
    for (m = 1; m <= n; m += 3)
    {
        if (m % 2 == 0)
            cout << setw(4) << -m;
        else
            cout << setw(4) << m;
    }
    return 0;
}