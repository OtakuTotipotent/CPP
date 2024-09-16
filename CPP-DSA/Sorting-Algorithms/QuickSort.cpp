#include <iostream>
using namespace std;
int pivot(int array[], int low, int high) //? divide & conquer
{
    int i = low - 1;
    for (int g = low; g < high; g++)
    {
        if (array[g] < array[high]) //* placement of elements before & after pivot: array[high]
        {
            i++;
            int x = array[i];
            array[i] = array[g];
            array[g] = x;
        }
    }
    ++i;
    int x = array[i];
    array[i] = array[high]; //* pivot element placement
    array[high] = x;
    return i;
}
void quickSort(int array[], int low, int high) //? Algorithm
{
    if (low < high)
    {
        int p = pivot(array, low, high);
        quickSort(array, low, p - 1); //* recursion
        quickSort(array, p + 1, high);
    }
}
int main() //? main ()
{
    int n;
    cout << "Enter number of elements : ";
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++) //* getting user inputs
    {
        cout << "enter number " << i + 1 << " : ";
        cin >> array[i];
    }
    quickSort(array, 0, n - 1);
    cout << "\nThe sorted numbers : ";
    for (int i = 0; i < n; i++)
        cout << array[i] << "  ";
    return 0;
}