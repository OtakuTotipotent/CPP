#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n;
    cout << "Enter number to search 1 ~ 10 : ";
    cin >> n;

    for (int val : nums)
    {
        if (val == n)
            cout << "Found " << val;
    }

    return 0;
}