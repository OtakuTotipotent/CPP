#include <iostream>
using namespace std;
int main()
{
    int r, c, usum = 0, lsum = 0;
    cout << "enter rows and columns : ";
    cin >> r >> c;
    int m[r][c];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
        {
            cout << "Enter value :: " << i << j << " : ";
            cin >> m[i][j];
        }

    for (int i = 0; i < r; i++)
    {
        for (int j = i; j < c; j++)
            usum += m[i][j];
        for (int k = 0; k <= i; k++)
            lsum += m[i][k];
    }
    cout << "\nSum of Upper Triangle of Given matrix :: " << usum;
    cout << "\nSum of Lower Triangle of Given matrix :: " << lsum;
    return 0;
}