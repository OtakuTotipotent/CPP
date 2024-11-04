// This Algo finds the majority element in an array where majority element count > n/2
// It doesn't require elements of array to be sorted

#include <iostream>
using namespace std;
int main()
{
    int a[] = {2, 2, 1, 1, 1, 2, 2};
    int n = 7;

    int i, frequency = 0, ans;

    for (i = 0; i < n; i++)
    {
        if (frequency < 1)
            ans = a[i];
        if (ans == a[i])
            frequency++;
        else
            frequency--;
    }

    cout << "Majority Element : " << ans;

    return 0;
}