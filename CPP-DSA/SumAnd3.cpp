//! printing the sum of all numbers till n that are divisible by 3
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter limiting number : ";
    cin >> n;
    for (int i = 1; i < n + 1; i++)
    {
        if (i % 3 == 0)
            cout << i << endl;
    }
    return 0;
}