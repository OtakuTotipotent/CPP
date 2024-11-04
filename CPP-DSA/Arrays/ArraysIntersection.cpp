// Printing the common elements of two arrays
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s1, s2;
    cout << "Enter Size of 1st Array : ";
    cin >> s1;

    int a[s1];
    for (int i = 0; i < s1; i++)
    {
        cout << "Enter value : ";
        cin >> a[i];
    }

    cout << "\nEnter Size of 2nd Array : ";
    cin >> s2;

    int b[s2];
    for (int i = 0; i < s2; i++)
    {
        cout << "Enter value : ";
        cin >> b[i];
    }

    // intersection action
    cout << "\nIntersection Data [ ";
    for (int i = 0; i < s1; i++)
    {
        for (int g = 0; g < s2; g++)
        {
            if (a[i] == b[g])
            {
                cout << a[i] << " , ";
                break;
            }
        }
    }
    cout << "] \n\n";

    return 0;
}