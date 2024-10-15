#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
    bool found = false;
    int n = 10, target;
    int array[n] = {8, 3, 8, 2, -4, 3, 0, 0, 1, 10};
    // taking user inputs
    // for (int i = 0; i < n; i++)
    // {
    //     cout << "Enter number '" << i + 1 << "' : ";
    //     cin >> array[i];
    // }
    // printing the numbers collection
    cout << "\nOriginal Set : ";
    for (int i = 0; i < n; i++)
    {
        cout << setw(5) << array[i];
    }
    // sorting the array | Selection Sorting
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[i] > array[j])
            {
                // swapping
                int t = array[i];
                array[i] = array[j];
                array[j] = t;
            }
        }
    }
    // printing the numbers collection
    cout << "\nSorted Set : ";
    for (int i = 0; i < n; i++)
    {
        cout << setw(5) << array[i];
    }
    // taking searchable input
    cout << "\nEnter searchable number : ";
    cin >> target;
    // searching target
    int s = 0, e = n - 1, m = 0; // start, end & mid points initialization
    while (s <= e)
    {
        m = (s + e) / 2;
        if (array[m] == target)
        {
            cout << "\nFound at index : " << m;
            found = true;
            s++; // just to show all occurrences
        }
        else if (target < array[m])
        {
            e = m - 1;
        }
        else if (target > array[m])
        {
            s = m + 1;
        }
        else
        {
            cout << "\nerror: something gone weird!!\n";
        }
    }
    // if NOT Found
    if (!found)
    {
        cout << "\nFound NoWhere!!\n";
    }
    return 0;
}