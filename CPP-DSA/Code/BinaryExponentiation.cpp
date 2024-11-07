#include <iostream>
using namespace std;
long exPower(long n, long p)
{
    if (p == 0)
        return 1;
    if (n == 0)
        return 0;
    if (p == 1)
        return n;
    if (p < 0)
    {
        n = 1 / n;
        p = -p;
    }

    long ans = 1, x = n;

    while (p > 0)
    {
        if (p % 2 == 1)
            ans *= x;
        x *= x;
        p /= 2;
    }

    return ans;
}
int main()
{
    long n, p;
    cout << "Enter Base number : ";
    cin >> n;
    cout << "Enter Exponent Power : ";
    cin >> p;

    cout << "\nAns : " << exPower(n, p);

    return 0;
}