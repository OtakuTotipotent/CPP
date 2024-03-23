#include <iostream>
#include <iomanip>
using namespace std;
void swaps(int *f, int *s)
{
    int t;
    t = *f;
    *f = *s;
    *s = t;
}
int main()
{
    int r, c, usum = 0, lsum = 0;
    cout << "Enter rows and columns : ";
    cin >> r >> c;
    int m[r][c], h[r][c];
    // taking user inputs
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "Enter value :: " << i << j << " : ";
            cin >> m[i][j];
            h[i][j] = m[i][j];
        }
    }
    // transposition process
    for (int i = 0; i < r; i++)
    {
        for (int j = i; j < c; j++)
        {
            swaps(&m[i][j], &m[j][i]); // pointers oriented function
        }
    }
    cout << "\n\n";
    // printing the final output
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cout << setw(4) << h[i][j];
        if (i == r / 2)
            cout << "    --->\t";
        else
            cout << "\t\t";
        for (int j = 0; j < c; j++)
            cout << setw(4) << m[i][j];
        cout << endl;
    }
    return 0;
}