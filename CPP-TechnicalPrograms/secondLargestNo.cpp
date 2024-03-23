#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of elements : ";
    cin >> n;
    int array[n];
    int mx = INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter value : ";
        cin >> array[i];
        mx = max(array[i], mx); // assigning max no. within runtime
    }
    // checking 2nd largest number
    int smx = INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        if (array[i] != mx)
            smx = max(array[i], smx);
    }
    // printing the final suggestion
    cout << "largest no : " << mx;
    cout << "\n2nd Largest: " << smx;
    return 0;
}