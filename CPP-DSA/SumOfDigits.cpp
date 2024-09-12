//! Finds the sum of all the digits of a given number
#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter a number : ";
    cin >> n;
    if (n < 0) // if someone inputs a -ve number
        n = n * (-1);
    cout << n;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    cout << "Sum of Digits : " << sum;
    return 0;
}