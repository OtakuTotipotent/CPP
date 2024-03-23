#include <iostream>
using namespace std;
void swapME(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int x, y;
    cout << "Enter number : ";
    cin >> x;
    cout << "Enter number : ";
    cin >> y;
    swapME(&x, &y);
    cout << "\nX : " << x;
    cout << "\nY : " << y;
    return 0;
}