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
    cout << "To find the Permutations\nWe have the formula = nPr \nn = total available items\nr = desired picks/options \nEnter value of n : ";
    cin >> n;
    cout << "Enter the value of r : ";
    cin >> r;

    int p; // the formula for permutation P
    p = factorial(n) / factorial(n - r);
    cout << "\nPossible Permutations are C = " << p << endl
         << endl
         << endl;

    return 0;
}