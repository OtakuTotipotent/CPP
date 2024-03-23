#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int r, c;
    cout << "Enter rows : ";
    cin >> r;
    cout << "Enter colomns : ";
    cin >> c;
    int m[r][c];
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << "enter value :: " << i << j << " : ";
            cin >> m[i][j];
        }
        cout << endl;
    }
    cout << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            cout << setw(4) << m[i][j];
        cout << endl;
    }
    cout << endl;
    for (i = 0; i < r; i++)
    {
        if (i % 2 == 0)
        {
            for (j = 0; j < c; j++)
                cout << setw(3) << m[i][j];
        }
        else
        {
            for (j = c - 1; j >= 0; j--)
                cout << setw(3) << m[i][j];
        }
        cout << " -----> ";
    }
    cout << " snake tail \n";
    return 0;
}