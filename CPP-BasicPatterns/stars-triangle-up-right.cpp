#include <iostream>
using namespace std;
int main()
{
    int n, i, j, s;
    cout << "Enter range : ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        for (s = n; s > i + 1; s--)
            cout << ' ';
        for (j = 0; j <= i; j++)
            cout << '*';
        cout << endl;
    }
    return 0;
}