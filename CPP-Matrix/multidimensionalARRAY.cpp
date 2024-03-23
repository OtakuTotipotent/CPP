#include <iostream>
using namespace std;
int main()
{
    int a[2][3][3][2][4];
    int i, j, k, l, m;
    for (i = 0; i < 2; i++)
    {
        cout << "Dimension : " << i + 1 << endl;
        for (j = 0; j < 3; j++)
        {
            cout << "Book :" << j + 1 << endl;
            for (k = 0; k < 3; k++)
            {
                cout << "Page :" << k + 1 << endl;
                for (l = 0; l < 2; l++)
                {
                    cout << "Row :" << l + 1 << endl;
                    for (m = 0; m < 4; m++)
                    {
                        cout << "Enter a value : ";
                        cin >> a[i][j][k][l][m];
                    }
                    cout << endl;
                }
            }
        }
    }

    // showing values
    for (i = 0; i < 2; i++)
    {
        cout << "Dimension : " << i + 1 << endl;
        for (j = 0; j < 3; j++)
        {
            cout << "Book :" << j + 1 << endl;
            for (k = 0; k < 3; k++)
            {
                cout << "Page :" << k + 1 << endl;
                for (l = 0; l < 2; l++)
                {
                    cout << "Row :" << l + 1 << endl;
                    for (m = 0; m < 4; m++)
                    {
                        cout << a[i][j][k][l][m];
                    }
                    cout << endl;
                }
            }
        }
    }
    return 0;
}