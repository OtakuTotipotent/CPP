#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a, b, c, m, n, s;
    bool flag = 1;
    cout << "Enter Rows for the Matrix : ";
    cin >> m;
    cout << "Enter Columns for the Matrix : ";
    cin >> n;
    if (m != n)
    {
        cout << "\nError : The Matrix must be a Square Matrix (m x m) & (r = c) in order to perform Periodic Funcions !\n\n";
        main();
    }
    cout << endl
         << endl;
    int matrixA[m][n], matrixB[m][n];
    // Matrix Inputs
    for (a = 0; a < m; a++)
    {
        for (b = 0; b < n; b++)
        {
            cout << "Enter value for element " << a << b << " : ";
            cin >> matrixA[a][b];
        }
    }
    // Matrix Self Multiplication i.e Square of Matrix
    for (a = 0; a < m; a++)
    {
        for (b = 0; b < n; b++)
        {
            s = 0;
            for (c = 0; c < n; c++)
                s += matrixA[a][c] * matrixA[c][b];
            matrixB[a][b] = s;
        }
    }
    // Printing the Two Matrices i.e Simple & Squared
    cout << "\n\nThe Given Simple Matrix is : \n\n";
    for (a = 0; a < m; a++)
    {
        for (b = 0; b < n; b++)
        {
            cout << setw(4) << matrixA[a][b];
        }
        cout << endl;
    }
    cout << "\n\nThe Squared Product Matrix is : \n\n";
    for (a = 0; a < m; a++)
    {
        for (b = 0; b < n; b++)
        {
            cout << setw(4) << matrixB[a][b];
        }
        cout << endl;
    }
    // Checking if the Matrix Given is an Idempotent or not
    for (a = 0; a < m; a++)
    {
        for (b = 0; b < n; b++)
        {
            if (matrixA[a][b] != matrixB[a][b])
            {
                flag = 0;
                break;
            }
        }
    }
    if (flag)
        cout << "\n\n The Given Matrix is an IDEMPOTENT Matrix !!\n\n";
    else
        cout << "\n\n The Given Matrix is NOT an IDEMPOTENT Matrix !!\n\n";
    return 0;
}