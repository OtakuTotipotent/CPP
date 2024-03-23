#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a, b, c, m, n, s;
    bool flag = 1;
    cout << "\nEnter Rows : ";
    cin >> m;
    cout << "Enter Columns : ";
    cin >> n;
    if (m != n)
    {
        cout << "\nError : Only Squared Matrix can be an ORTHOGNAL MATRIX \n\n";
        main();
    }
    int x[m][n], y[m][n], z[m][n];
    // inputting the values and taking Transpose
    for (a = 0; a < m; a++)
    {
        for (b = 0; b < n; b++)
        {
            cout << "Enter value for element : " << a << b << " : ";
            cin >> x[a][b];
            y[b][a] = x[a][b];
        }
    }
    // multiplying the x & y
    for (a = 0; a < m; a++)
    {
        for (b = 0; b < n; b++)
        {
            s = 0;
            for (c = 0; c < n; c++)
            {
                s += x[a][c] * y[c][b];
            }
            z[a][b] = s;
        }
    }
    // printing the whole three matrices
    cout << "\n The Given Matrix is \n";
    for (a = 0; a < m; a++)
    {
        for (b = 0; b < n; b++)
            cout << setw(5) << x[a][b];
        cout << endl;
    }
    cout << "\n\n The Transpose Matrix is \n";
    for (a = 0; a < m; a++)
    {
        for (b = 0; b < n; b++)
            cout << setw(5) << y[a][b];
        cout << endl;
    }
    cout << "\n\n The Product Matrix is \n";
    for (a = 0; a < m; a++)
    {
        for (b = 0; b < n; b++)
            cout << setw(5) << z[a][b];
        cout << endl;
    }
    // checking if the matrix is Orthognal or not
    for (a = 0; a < m; a++)
    {
        for (b = 0; b < n; b++)
        {
            if (a == b)
            {
                if (z[a][b] != 1)
                {
                    flag = 0;
                    break;
                }
            }
            else
            {
                if (z[a][b] != 0)
                {
                    flag = 0;
                    break;
                }
            }
        }
    }
    if (flag)
        cout << "\n The Given matrix is an ORTHOGNAL MATRIX \n\n";
    else
        cout << "\n The Given matrix is NOT ORTHOGNAL MATRIX \n\n";
    return 0;
}