// Given an array with each element having its duplicate except one element, program finds that unique one element
#include <iostream>
using namespace std;
int main()
{
    int nums[] = {4, 2, 1, 2, 1};

    int ans = 0;
    for (int i = 0; i < 5; i++)
        ans ^= nums[i]; // XOR operator, same values cancel out each other

    cout << ans << endl;

    return 0;
}