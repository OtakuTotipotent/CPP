//! printing all the prime numbers (in the range of int datatype) upto the n
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the limit number : ";
    cin >> n;
    for (int i = 1; i < n + 1; i++) //? to loop from 1 to n
    {
        bool prime = true;
        for (int d = 2; d < (i / 2) + 1; d++)
        {
            if (i % d == 0)
            {
                prime = false;
                break;
            }
        }
        if (prime)
            cout << i << endl;
    }
    return 0;
}