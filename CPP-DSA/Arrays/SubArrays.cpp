#include <iostream>
using namespace std;

int main()
{
    int i, size, count = 0;
    cout << "Enter the size of the array : ";
    cin >> size; // size decided by user

    int array[size]; // Dynamic array

    for (i = 0; i < size; i++) // Taking user inputs
    {
        cout << "enter element value : ";
        cin >> array[i];
    }

    cout << "\n\nOriginal Input Array : ";
    for (i = 0; i < size; i++) // displaying OG array
        cout << array[i] << " , ";

    cout << "\n\nPossible Sub-Arrays\n";
    for (int i = 0; i < size; i++) // printing out sub-arrays
    {
        for (int j = i; j < size; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << array[k] << ',';
                count++;
            }
            cout << endl;
        }
        cout << endl;
    }
    cout << "Total Sub-Arrays :: " << count << endl
         << endl
         << endl;

    return 0;
}