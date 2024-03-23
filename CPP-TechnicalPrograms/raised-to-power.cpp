#include <iostream>
using namespace std;
int main()
{
    int p, n, s = 1;
    cout << "Enter a number (base) : ";
    cin >> n;
    cout << "Enter 2nd number (power) : ";
    cin >> p;
    for (int i = 1; i < p + 1; i++)
    {
        s = s * n;
    }
    cout << "Answer : " << s << endl;
    return 0;
}