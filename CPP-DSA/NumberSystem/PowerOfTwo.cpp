#include <bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(int n)
{
    if (n < 1)
        return false;
    return (n & (n - 1)) == 0; // bitwise AND operator
}
int main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;

    // if ((n << 1) % 2 == 0) //! CAN I USE LEFT SHIFT OPERATOR ?

    if (isPowerOfTwo(n))
        cout << n << " is the power of 2";
    else
        cout << n << " is NOT the power of 2";
    return 0;
}