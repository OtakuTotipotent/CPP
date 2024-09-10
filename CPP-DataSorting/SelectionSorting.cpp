#include <iostream>
using namespace std;
int main()
{
    int min, array[5];

    // User inputs
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter value : ";
        cin >> array[i];
    }

    // Selection Sorting
    for (int i = 0; i < 4; i++) // i < n-1
    {
        min = i;
        for (int j = i + 1; j < 5; j++)
        {
            if (array[min] > array[j])
                min = j;
        }
        int temp = array[i];
        array[i] = array[min];
        array[min] = temp;
    }

    // printing sorted array
    for (int i = 0; i < 5; i++)
        cout << array[i] << " , ";

    return 0;
}