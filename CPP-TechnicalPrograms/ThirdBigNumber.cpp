#include <iostream>
#include <limits.h> // For INT_MIN
using namespace std;

int main()
{
    int a[] = {1, 2, 23, 4, 5, 0, 1, -1, -8, -99, 77, 23};
    int first = INT_MIN, second = INT_MIN, third = INT_MIN;

    for (int i = 0; i < 12; i++)
    {
        if (a[i] > first)
        {
            third = second;
            second = first;
            first = a[i];
        }
        // else if (a[i] > second && a[i] != first)
        else if (a[i] > second)
        {
            third = second;
            second = a[i];
        }
        // else if (a[i] > third && a[i] != second && a[i] != first)
        else if (a[i] > third)
        {
            third = a[i];
        }
    }

    cout << "1st: " << first << endl;
    cout << "2nd: " << second << endl;
    cout << "3rd: " << third << endl;

    return 0;
}
