#include <iostream>
using namespace std;
int main()
{
    int r, x;
    cout << "Enter length of the array : ";
    cin >> r;
    int a[r], i, j;
    for (i = 0; i < r; i++)
    {
        cout << "Enter number : ";
        cin >> a[i];
    }
    char ch;
reloop:
    cout << "\n1. Sort Ascending \n2. Sort Descending \n0. Exit\n";
    cout << "Enter a choice : ";
    cin >> ch;
    if (ch == '0')
    {
        cout << "\nProgram Exited!\n\n";
        exit(0);
    }
    else if (ch == '1')
    {
        cout << "\nYour Data  : ";
        for (i = 0; i < r; i++)
            cout << a[i] << ", ";
        for (i = 0; i < r; i++) // process for the sorting
        {
            for (j = 0; j < r - 1; j++)
            {
                if (a[j] > a[j + 1])
                {
                    x = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = x;
                }
            }
        }
        cout << "\nSorted Data: ";
        for (i = 0; i < r; i++)
            cout << a[i] << ", ";
    }
    else if (ch == '2')
    {
        cout << "\nYour Data  : ";
        for (i = 0; i < r; i++)
            cout << a[i] << ", ";
        for (i = 0; i < r; i++) // process for the sorting
        {
            for (j = 0; j < r - 1; j++)
            {
                if (a[j] < a[j + 1])
                {
                    x = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = x;
                }
            }
        }
        cout << "\nSorted Data: ";
        for (i = 0; i < r; i++)
            cout << a[i] << ", ";
    }
    else
    {
        cout << "\nInvalid Input!\n";
        goto reloop;
    }
    return 0;
}