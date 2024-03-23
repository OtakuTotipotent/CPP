#include <iostream>
using namespace std;
int main()
{
    int n, c = 1, s = 0;
    cout << "Enter a limiting number here : ";
    cin >> n;
    while (c < n + 1)
    {
        s += (c * c * c);
        c++;
    }
    cout << "sum of the cubes of numbers upto " << n << " is : " << s << endl;

    return 0;
}