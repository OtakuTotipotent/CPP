#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int r, c, out, inn;
    cout << "Enter rows : ";
    cin >> r;
    cout << "Enter colomns : ";
    cin >> c;
    int mat[r][c], matReal[r][c];
    if (r == c) // inputs for a valid matrix
    {
        for (out = 0; out < r; out++)
        {
            for (inn = 0; inn < c; inn++)
            {
                cout << "enter value " << out << inn << " : ";
                cin >> mat[out][inn];
                matReal[out][inn] = mat[out][inn];
            }
        }
    }
    else
        main();
    // matrix transposition
    for (out = 0; out < r; out++)
    {
        for (inn = out + 1; inn < c; inn++)
            swap(mat[out][inn], mat[inn][out]);
    }
    // rows transposition
    for (out = 0; out < r / 2; out++)
    {
        for (inn = 0; inn < c; inn++)
            swap(mat[out][inn], mat[r - 1 - out][inn]);
    }
    // printing final output, rotation (anticlockwise, by 90^)
    for (out = 0; out < r; out++)
    {
        for (inn = 0; inn < c; inn++)
            cout << setw(4) << matReal[out][inn];
        if (out == r / 2)
            cout << "    --->\t";
        else
            cout << "\t\t";
        for (inn = 0; inn < c; inn++)
            cout << setw(4) << mat[out][inn];
        cout << endl;
    }
    return 0;
}