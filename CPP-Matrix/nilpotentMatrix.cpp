#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a, b, c, m, n, s, i, k;
    bool flag = 1;
    cout << "Enter Rows for the Matrix : ";
    cin >> m;
    cout << "Enter Columns for the Matrix : ";
    cin >> n;
    if (m != n)
    {
        cout << "\n\nError : Only Square Matrix (m x m) & (r = c) can Give a NILPOTENT Matrix !!\n\n";
        main();
    }
    cout << "Enter the variable Power Value as index : ";
    cin >> k;
    cout << endl;
    int matrixA[m][n], matrixB[m][n], matrixP[m][n];
    // Getting the Matrix from the user
    for (a = 0; a < m; a++)
    {
        for (b = 0; b < n; b++)
        {
            cout << "Enter the value for element " << a << b << " : ";
            cin >> matrixA[a][b];
            matrixB[a][b] = matrixA[a][b];
        }
    }
    // Performing the Nilpotent Operations
    for (i = 1; i < k; i++) // specifies the limit upto which multiplication will occur
    {
        for (a = 0; a < m; a++) // multiplication starts
        {
            for (b = 0; b < n; b++)
            {
                s = 0;
                for (c = 0; c < n; c++)
                {
                    s += matrixA[a][c] * matrixB[c][b];
                }
                matrixP[a][b] = s;
            }
        }                       // ends multiplication
        for (a = 0; a < m; a++) // swapping of values from matrixP to matrixB
        {
            for (b = 0; b < n; b++)
            {
                matrixB[a][b] = matrixP[a][b];
            }
        }
    }
    // Checking if the Product Matrix is a Null Matrix or NOT
    for (a = 0; a < m; a++)
    {
        for (b = 0; b < n; b++)
        {
            if (matrixP[a][b] != 0)
            {
                flag = 0;
                break;
            }
        }
    }
    // Printing the Given Matrix
    cout << "\nHere is the Given Matrix \n";
    for (a = 0; a < m; a++)
    {
        for (b = 0; b < n; b++)
        {
            cout << setw(4) << matrixA[a][b];
        }
        cout << endl;
    }
    cout << "\nHere is the Product Matrix \n";
    for (a = 0; a < m; a++)
    {
        for (b = 0; b < n; b++)
        {
            cout << setw(4) << matrixP[a][b];
        }
        cout << endl;
    }
    if (flag)
        cout << "\nGiven Matrix is a NILPOTENT of index " << k << " !!\n\n";

    else
        cout << "\nGiven Matrix is NOT a NILPOTENT of index " << k << " !!\n\n";
    return 0;
}