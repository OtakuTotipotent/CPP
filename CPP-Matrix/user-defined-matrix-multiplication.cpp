#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int ur, uc1, uc2; // no need to count for rows of matrix [b]
    cout << "--> For Matrix [a]\n";
    cout << "Enter the number of rows : ";
    cin >> ur;
    cout << "Enter the no. of colomns : ";
    cin >> uc1;
    int a[ur][uc1];
    cout << "--> For Matrix [b]\n";
    cout << "Enter the no. of colomns : ";
    cin >> uc2;
    int b[uc1][uc2];
    int m, n, c, s;
    cout << "\nEnter the values for " << ur << "X" << uc1 << " matrix [a]\n";
    for (m = 0; m < ur; m++)
        for (n = 0; n < uc1; n++)
            cin >> a[m][n];
    cout << "Enter the values for " << uc1 << "X" << uc2 << " matrix [b]\n";
    for (m = 0; m < uc1; m++)
        for (n = 0; n < uc2; n++)
            cin >> b[m][n];
    // checking for the estimated output
    cout << "\nFirst Matrix\n";
    for (m = 0; m < ur; m++)
    {
        for (n = 0; n < uc1; n++)
            cout << setw(3) << a[m][n];
        cout << endl;
    }
    cout << "Second Matrix\n";
    for (m = 0; m < uc1; m++)
    {
        for (n = 0; n < uc2; n++)
            cout << setw(3) << b[m][n];
        cout << endl;
    }
    int p[ur][uc2];
    for (m = 0; m < ur; m++)
    {
        for (n = 0; n < uc2; n++)
        {
            s = 0;
            for (c = 0; c < uc1; c++)
            {
                s = s + (a[m][c] * b[c][n]);
            }
            p[m][n] = s;
        }
    }
    cout << "\nThe Product of [a]x[b] is below :\n";
    for (m = 0; m < ur; m++)
    {
        for (n = 0; n < uc2; n++)
            cout << setw(4) << p[m][n];
        cout << endl;
    }
    return 0;
}