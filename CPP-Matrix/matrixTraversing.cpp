#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n, i;
    cout << "Enter rows : ";
    cin >> n;
    int mat[n][n];
    int top = 0, bottom = n, left_col = 0, right_col = n;
    // taking user inputs
    for (int j = 0; j < n; j++)
    {
        for (i = 0; i < n; i++)
        {
            cout << "enter value for " << j << i << " : ";
            cin >> mat[j][i];
        }
    }
    // printing the values in traverse form
    while (top < bottom && left_col < right_col)
    {
        for (i = left_col; i < right_col; i++)
            cout << setw(4) << mat[top][i];
        top++;
        for (i = top; i < bottom; i++)
            cout << setw(4) << mat[i][right_col];
        right_col--;
        if (top < bottom)
        {
            for (i = right_col; i >= left_col; i--)
                cout << setw(4) << mat[bottom][i];
            bottom--;
        }
        if (left_col < right_col)
        {
            for (i = bottom; i >= top; i--)
                cout << setw(4) << mat[i][left_col];
            left_col++;
        }
    }
    return 0;
}