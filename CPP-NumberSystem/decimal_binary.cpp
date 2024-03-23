// converting a decimal number into a binary number
#include <iostream>
using namespace std;
int main()
{
    long long n, s, t, b;
    cout << "Enter a decimal number : ";
    cin >> n;
    s = 1;
    b = 1;
    while (s <= n)
        s *= 2;
    s /= 2;
    t = s;
    while (s / 2 > 0)
    {
        if ((s / 2 + t) <= n)
        {
            b = b * 10 + 1;
            t = t + s / 2;
        }
        else
            b = b * 10;
        s = s / 2;
    }
    cout << "The Binary form of No ( " << n << " ) is : " << b << endl;

    return 0;
}
