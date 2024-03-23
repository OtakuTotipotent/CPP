#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter number : ";
    cin >> a;
    cout << "Enter number : ";
    cin >> b;
    cout << "Enter number : ";
    cin >> c;
    int max, min;
    if (a > b)
    {
        if (a > c)
            max = a;
        else
            max = c;
        if (b < c)
            min = b;
        else
            min = c;
    }
    else
    {
        if (b > c)
            max = b;
        else
            max = c;
        if (a < c)
            min = a;
        else
            min = c;
    }
    cout << "Max : " << max;
    cout << "\nMin : " << min;
}