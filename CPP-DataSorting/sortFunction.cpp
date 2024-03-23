#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {2, 3, 8, 0, 3, 2, 5, 1, 9, 7, 6, 10, 1};
    // sort(arr, arr + 13); // ascending order
    sort(arr, arr + 13, greater<int>()); // descending order
    for (int i = 0; i < 13; i++)
        cout << arr[i] << " ";
    return 0;
}