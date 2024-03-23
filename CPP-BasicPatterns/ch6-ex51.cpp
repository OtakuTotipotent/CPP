#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n, i, j;
    cout << "Enter range : ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = i; j <= n; j++)
            cout << setw(4) << j;
        cout << endl;
    }
    return 0;
}