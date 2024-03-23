#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string x, y;
    cout << "Enter a sentence to be checked if palindrome or not : ";
    getline(cin, x);
    y = x;
    reverse(y.begin(), y.end());
    cout << "\n The original sentence : " << x;
    cout << "\n The reversed sentence : " << y;
    if (x == y)
    {
        cout << "\n The sentence is palindrome\n";
    }
    else
    {
        cout << "\n The sentence is not palindrome\n";
    }

    return 0;
}