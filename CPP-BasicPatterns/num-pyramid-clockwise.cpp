/*
example : 6.55
1
2 4
3 6 9
4 8 12 16
3 6 9
2 4
1
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n, i, j;
    cout << "Enter range : ";
    cin >> n;
    for (i = 1; i < n + 1; i++)
    {
        for (j = 1; j <= i; j++)
            cout << setw(4) << left << i * j;
        cout << endl;
    }
    for (i = n - 1; i > 0; i--)
    {
        for (j = 1; j <= i; j++)
            cout << setw(4) << left << i * j;
        cout << endl;
    }
    return 0;
}
