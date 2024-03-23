#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a, b, m, n;
    bool flag = 1;
    cout << "Enter Rows : ";
    cin >> m;
    cout << "Enter Columns : ";
    cin >> n;
    if (m != n)
    {
        cout << "\n Error : Only Square Matrix can be a Symmetric Matrix !!\n\n";
        main();
    }
    int matrixA[m][n], matrixP[m][n];
    for (a = 0; a < m; a++) // inputs values in matrix & also does Transpose here
    {
        for (b = 0; b < n; b++)
        {
            cout << "Enter the value for element : " << a << b << " : ";
            cin >> matrixA[a][b];
            matrixP[b][a] = matrixA[a][b];
        }
    }
    for (a = 0; a < m; a++) // checking if product is identical to the given matrix or not
    {
        for (b = 0; b < n; b++)
        {
            if (matrixA[a][b] != matrixP[a][b])
            {
                flag = 0;
                break;
            }
        }
    }
    cout << "\n The Given Matrix is : \n";
    for (a = 0; a < m; a++) // printing the Given matrix
    {
        for (b = 0; b < n; b++)
        {
            cout << setw(4) << matrixA[a][b];
        }
        cout << endl;
    }
    cout << "\n The Matrix Transpose is : \n";
    for (a = 0; a < m; a++) // printing the Transpose Matrix
    {
        for (b = 0; b < n; b++)
        {
            cout << setw(4) << matrixP[a][b];
        }
        cout << endl;
    }
    cout << endl;
    if (flag)
        cout << "\n Given Matrix is a SYMMETRIC MATRIX \n\n";
    else
        cout << "\n Given Matrix is NOT SYMMETRIC MATRIX \n\n";
    return 0;
}