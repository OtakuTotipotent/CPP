#include <iostream>
using namespace std;
int main()
{
    long n, p, x;
    cout << "Enter a number : ";
    cin >> n;
    x = n;
    p = 0;
    while (x > 0)
    {
        p = (p * 10) + (x % 10);
        x = x / 10;
    }
    if (p == n)
        cout << n << " is a palindrome!";
    else
        cout << n << " is not a palindrome!";
    return 0;
}