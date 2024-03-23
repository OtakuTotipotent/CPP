//  1 3 6 10 15 21 28 36
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int r, a = 1, n;
    cout << "Enter range : ";
    cin >> r;
    for (n = 1; n <= r; n += a)
    {
        cout << setw(4) << n;
        a++;
    }
    return 0;
}
// 2nd method using a while loop is more simple but has the same efficiency score
/*
    while (n <= r)
    {
        cout << setw(4) << n;
        n = n + a;
        a++;
    }
*/