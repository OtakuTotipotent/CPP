#include <iostream>
using namespace std;
int main()
{
    int u, r;
    cout << "How many numbers you will put in : ";
    cin >> r;
    int a[r], i, j, x;
    for (i = 0; i < r; i++)
    {
        cout << "Enter number : ";
        cin >> a[i];
    }
    for (i = 0; i < r - 1; i++) // ascending sorting
    {
        for (j = i + 1; j < r; j++)
        {
            if (a[j] < a[i])
            {
                x = a[j];
                a[j] = a[i];
                a[i] = x;
            }
        }
    }
    cout << "\nSorted data : ";
    for (i = 0; i < r; i++)
        cout << a[i] << ", ";
    cout << endl;
    // should search all possible matches
    while (u >= 0) // keeps getting inputs from the user & THUS -ve inputs are not allowed
    {
        cout << "\nEnter number to be searched : ";
        cin >> u;
        bool found = 0;
        int m, p = 0, n = r - 1;
        while (p <= n)
        {
            m = (p + n) / 2;
            if (u == a[m])
            {
                cout << "@ Location : " << m + 1;
                found = 1;
            }
            if (u > a[m])
                p = m + 1;
            else
                n = m - 1;
        }
        if (!found)
            cout << "\nNumber not found anywhere!\n\n";
    }
    return 0;
}