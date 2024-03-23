#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter Table number : ";
    cin >> n;
    for (m = 1; m < 11; m++)
    {
        cout << setw(4) << n << setw(4) << "X" << setw(4) << m << setw(4) << "=" << setw(4) << (n * m) << endl;
    }
    return 0;
}