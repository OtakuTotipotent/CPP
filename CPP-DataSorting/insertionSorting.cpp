#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter length of array : ";
    cin >> n;
    int arr[n], i = 0, j, t;
    for (i = 0; i < n; i++)
    {
        cout << "Enter value : ";
        cin >> arr[i];
    }
    do // insertion sorting occurs here
    {
        if (arr[i] > arr[i + 1]) // Basic term, initial sorting of 2 indexes
        {
            t = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = t;
        }
        for (j = 0; j < i + 2; j++) // next indexed sorting all
            if (arr[j] > arr[i + 2])
            {
                t = arr[j];
                arr[j] = arr[i + 2];
                arr[i + 2] = t;
            }
        i += 2;
    } while (i < n - 2);
    for (i = 0; i < n; i++)
        cout << arr[i] << '\t';
    return 0;
}