/*
*****
*   *
*   *
*   *
*****
*/
#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    char space = ' ', symbol;
    cout << "Enter range : ";
    cin >> n;
    cout << "Enter the character you wanna display : ";
    cin >> symbol;
    cout << endl;
    for (i = 1; i < n + 1; i++)
    {
        for (j = 1; j < n + 1; j++)
            if (i == 1 || i == n || j == 1 || j == n)
                cout << symbol;
            else
                cout << space;
        cout << endl;
    }
    return 0;
}