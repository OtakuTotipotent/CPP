#include <iostream>
using namespace std;
int main()
{
    int h;
    cout << "Enter height of Pyramid : ";
    cin >> h;
    for (int i = 0; i < h; i++)
    {
        for (int s = i + 1; s < h; s++)
            cout << ' ';
        for (int g = 1; g < i + 2; g++)
            cout << g;
        for (int g = i; g > 0; g--)
            cout << g;
        cout << endl;
    }
    return 0;
}