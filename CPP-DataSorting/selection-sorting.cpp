#include <iostream>
using namespace std;
int main()
{
    int r;
    char ch;
    cout << "Enter length of the array : ";
    cin >> r;
    int a[r], i, j, x;
    for (i = 0; i < r; i++)
    {
        cout << "Enter number : ";
        cin >> a[i];
    }
reloop:
    cout << "\n1. Sort Ascending \n2. Sort Descending \n0. Exit\n";
    cout << "Enter choice : ";
    cin >> ch;
    if (ch == '0')
    {
        cout << "\nProgram exited!\n\n";
        exit(0);
    }
    else if (ch == '1')
    {
        cout << "\nYour data : ";
        for (i = 0; i < r; i++)
            cout << a[i] << ", ";
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
    }
    else if (ch == '2')
    {
        cout << "\nYour data    : ";
        for (i = 0; i < r; i++)
            cout << a[i] << ", ";
        for (i = 0; i < r - 1; i++) // descending sorting
        {
            for (j = i + 1; j < r; j++)
            {
                if (a[j] > a[i])
                {
                    x = a[j];
                    a[j] = a[i];
                    a[i] = x;
                }
            }
        }
        cout << "\nSorted data  : ";
        for (i = 0; i < r; i++)
            cout << a[i] << ", ";
    }
    else
    {
        cout << "\nInvalid Input\n";
        goto reloop;
    }

    return 0;
}