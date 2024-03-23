/*
    1
   2 2
  3 3 3
 4 4 4 4
5 5 5 5 5
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n, i, j, s;
    cout << "Enter range : ";
    cin >> n;
    for (i = 1; i < n + 1; i++)
    {
        for (s = n; s > i; s--)
            cout << ' ';
        for (j = 1; j <= i; j++)
            cout << setw(2) << i;
        cout << endl;
    }
    return 0;
}