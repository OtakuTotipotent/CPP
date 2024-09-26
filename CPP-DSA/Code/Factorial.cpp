//! Printing the factorial of a given number
#include <iostream>
using namespace std;
int main()
{
    int n, fac = 1;
    cout << "Enter number : ";
    cin >> n;
    for (int i = n; i > 0; i--)
        fac *= i;
    cout << "Factorial : " << fac;
    return 0;
}