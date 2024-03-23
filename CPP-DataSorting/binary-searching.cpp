#include <iostream>
using namespace std;
int main()
{
    int u, r;
    cout << "How many numbers you will put in : ";
    cin >> r;
    int a[r], i, j, x;
    bool found = 0;
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
    cout << "\nEnter number to be searched : ";
    cin >> u;
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
    return 0;
}