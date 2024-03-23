#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int rows = 3, cols = 3;
    //    cout << "Enter rows : ";
    ////    cin >> rows;
    //    cout << "Enter cols : ";
    //    cin >> cols;
    int rowGuessed = 0;
    int out, inn, x;
    int mat[rows][cols] = {{3, 30, 38}, {36, 43, 60}, {40, 51, 69}};
    // user inputs
    cout << "\n---> Matrix MUST be in Ascending Ordered !!! \n\n";
    for (out = 0; out < rows; out++)
    {
        for (inn = 0; inn < cols; inn++)
        {
            //            cout << "enter value for " << out << inn << " : ";
            //            cin >> mat[out][inn];
            cout << setw(4) << mat[out][inn];
        }
        cout << endl;
    }
    cout << "\nEnter Number being searched : ";
    cin >> x;
    // Guessing the row which may contain x
    // rowGuessed=0;
    for (out = 0; out < rows; out++)
    {
        if (mat[out][0] == x)
            return 1;
        else if (mat[out][0] > x)
        {
            rowGuessed = out - 1;
            break;
        }
        else
            rowGuessed = out;
    }
    if (rowGuessed >= 0)
    {
        for (inn = 0; inn < cols; inn++)
            if (mat[rowGuessed][inn] == x)
                return 1;
    }
    return 0;
}