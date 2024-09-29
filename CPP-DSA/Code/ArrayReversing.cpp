#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of array : ";
    cin >> size;

    // Creating Dynamic Array
    int array[size];
    cout << "\nEnter Numbers Below\n\n";
    for (int i = 0; i < size; i++)
    {
        cout << "Enter value for index " << i << " : ";
        cin >> array[i];
    }

    cout << "\nOriginal Array : ";
    for (int i = 0; i < size; i++)
        cout << array[i] << "  ";

    // Array Reversing
    for (int i = 0; i < size / 2; i++)
    {
        int temp = array[i];
        array[i] = array[size - 1 - i];
        array[size - 1 - i] = temp;
    }

    // Output
    cout << "\n\nArray Reversed Successfully!\n\nReversed Array : ";
    for (int i = 0; i < size; i++)
        cout << array[i] << "  ";

    return 0;
}