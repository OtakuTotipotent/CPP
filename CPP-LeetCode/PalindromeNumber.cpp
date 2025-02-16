#include <iostream>
using namespace std;
bool isPalindrome(int num)
{
    int reversed = 0;
    int x = num;
    while (x > 0)
    {
        reversed = (reversed * 10) + (x % 10);
        x /= 10;
    }

    if (reversed == num)
        return true;

    return false;
}

int main()
{
    int user_input;
    cout << "Enter an integer : ";
    cin >> user_input;

    if (isPalindrome(user_input))
    {
        cout << "\nYes! It is palindrome.\n";
    }
    else
    {
        cout << "\nNope! It is not a palindrome.\n";
    }

    return 0;
}