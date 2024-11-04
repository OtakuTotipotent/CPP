#include <iostream>
using namespace std;
int main()
{
    int start, end, curSum, maxSum = INT_MIN;
    int array[] = {3, -4, 5, 4, -1, 7, -8}; // array initialization for Testing
    int size = 7;                           // size of the above array

    for (start = 0; start < size; start++)
    {
        curSum = 0;
        for (end = start; end < size; end++)
        {
            curSum += array[end];
            maxSum = max(maxSum, curSum);
        }
    }

    cout << "\nMaximum Sub-Array Sum : " << maxSum;

    return 0;
}