#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int rows, colm;
    cout << "enter rows : ";
    cin >> rows;
    cout << "enter colm : ";
    cin >> colm;
    int out, inn;
    int mat[rows][colm], matNew[rows][colm];
    // getting user inputs
    for (out = 0; out < rows; out++)
    {
        for (inn = 0; inn < colm; inn++)
        {
            cout << "enter value for " << out << inn << " : ";
            cin >> mat[out][inn];
            matNew[out][inn] = mat[out][inn];
        }
    }
    // row's exchange
    for (out = 0; out < rows / 2; out++)
    {
        for (inn = 0; inn < colm; inn++)
            swap(matNew[out][inn], matNew[rows - 1 - out][inn]);
    }
    // printing the final output
    cout << "\n Given Matrix\t\tRow Swapped Matrix\n";
    for (out = 0; out < rows; out++)
    {
        for (inn = 0; inn < colm; inn++)
            cout << setw(4) << mat[out][inn];
        if (out == rows / 2)
            cout << "   --->\t";
        else
            cout << "\t\t";
        for (inn = 0; inn < colm; inn++)
            cout << setw(4) << matNew[out][inn];
        cout << endl;
    }
    return 0;
}