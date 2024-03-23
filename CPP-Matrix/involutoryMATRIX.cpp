#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a, b, c, s, m, n;
    bool flag = 1;
    cout << "Enter Rows : ";
    cin >> m;
    cout << "Enter Columns : ";
    cin >> n;
    if (m != n)
    {
        cout << "\n Error : Only Square Matrix can be an INVOLUTORY MATRIX !!\n";
        main();
    }
    int matrixA[m][n], matrixP[m][n];
    for (a = 0; a < m; a++) // inputting the values in matrix
    {
        for (b = 0; b < n; b++)
        {
            cout << "Enter value for element " << a << b << " : ";
            cin >> matrixA[a][b];
        }
    }
    for (a = 0; a < m; a++) // matrix multiplication
    {
        for (b = 0; b < n; b++)
        {
            s = 0;
            for (c = 0; c < n; c++)
            {
                s += matrixA[a][c] * matrixA[c][b];
            }
            matrixP[a][b] = s;
        }
    }
    cout << "\n The Given Matrix is \n";
    for (a = 0; a < m; a++) // prints out the product matrix
    {
        for (b = 0; b < n; b++)
        {
            cout << setw(4) << matrixA[a][b];
        }
        cout << endl;
    }
    cout << "\n\n The Product Matrix is \n";
    for (a = 0; a < m; a++) // prints out the product matrix
    {
        for (b = 0; b < n; b++)
        {
            cout << setw(4) << matrixP[a][b];
        }
        cout << endl;
    }
    for (a = 0; a < m; a++) // checking if Product Matrix is Identity or NOT
    {
        for (b = 0; b < n; b++)
        {
            if (a == b)
            {
                if (matrixP[a][b] != 1)
                {
                    flag = 0;
                    break;
                }
            }
            else
            {
                if (matrixP[a][b] != 0)
                {
                    flag = 0;
                    break;
                }
            }
        }
    }
    if (flag)
        cout << "\n The Given Matrix is INVOLUTORY MATRIX \n\n";
    else
        cout << "\n The Given Matrix is NOT INVOLUTORY MATRIX \n\n";
    return 0;
}