#include <iostream>
using namespace std;
int factorial(int x)
{
    int f = 1;
    for (int i = 1; i <= x; i++)
        f = f * i;
    return f;
}
int main()
{
    int n, r;
    cout << "To find the combinations\nWe have the formula = nCr \nn = total available items\nr = desired picks/options \nEnter value of n : ";
    cin >> n;
    cout << "Enter the value of r : ";
    cin >> r;

    int c; // the formula for Combinations C
    c = (factorial(n) / (factorial(r) * (factorial(n - r))));
    cout << "\nPossible Combinations are C = " << c << endl
         << endl
         << endl;

    return 0;
}