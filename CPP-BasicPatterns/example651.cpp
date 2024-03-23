/*
2
3   6
4   8   12
5   10  15  20
6   12  18  24  30
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n, i, j;
    cout << "Enter range : ";
    cin >> n;
    for (i = 2; i < n + 1; i++)
    {
        for (j = 1; j < i; j++)
            cout << setw(4) << left << i * j;
        cout << endl;
    }
    return 0;
}