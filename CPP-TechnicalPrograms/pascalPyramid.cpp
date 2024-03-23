#include <iostream>
#include <iomanip>
using namespace std;
int factorial(int x)
{
    int f = 1;
    for (int g = 1; g <= x; g++)
        f *= g;
    return f;
}
int nCr(int n, int r)
{
    return (factorial(n) / (factorial(r) * factorial(n - r)));
}
int main()
{
    int h, i, j;
    cout << "Enter triangle height : ";
    cin >> h;
    cout << endl;
    for (i = 0; i <= h; i++)
    {
        for (j = 0; j <= h - i; j++)
            cout << "  "; // the combinations function
        for (j = 0; j <= i; j++)
            cout << setw(4) << nCr(i, j); // the combinations function
        cout << endl;
    }
    cout << endl
         << endl;
    return 0;
}