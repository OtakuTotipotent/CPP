/*
        1
      1 2
    1 2 3
  1 2 3 4
1 2 3 4 5
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
        for (int s = n; s > i; s--)
            cout << "    ";
        for (j = 1; j <= i; j++)
            cout << setw(4) << j;
        cout << endl;
    }
    return 0;
}