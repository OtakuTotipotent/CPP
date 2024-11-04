// for finding maximum subarray sum
#include <iostream>
using namespace std;

int main()
{
    int a[] = {3, -4, 5, 4, -1, 7, -8};
    int i, curSum = 0, maxSum = INT_MIN;

    for (i = 0; i < 7; i++)
    {
        curSum += a[i];
        maxSum = max(maxSum, curSum);
        if (curSum < 0)
            curSum = 0;
    }

    cout << "Max Subarray Sum = " << maxSum;

    return 0;
}