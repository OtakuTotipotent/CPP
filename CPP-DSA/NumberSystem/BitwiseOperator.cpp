#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n1, n2;
    cout << "\nEnter 1st number : ";
    cin >> n1;
    cout << "Enter 2nd number : ";
    cin >> n2;

    cout << "\nBitwise & (AND) Operator : " << (n1 & n2) << endl;
    cout << "Bitwise |  (OR) Operator : " << (n1 | n2) << endl;
    cout << "Bitwise ^ (XOR) Operator : " << (n1 ^ n2) << endl;
    cout << "Bitwise << (Left Shift) Operator for " << n1 << " by " << 2 << " is : " << (n1 << 2) << endl;
    cout << "Bitwise << (Left Shift) Operator for " << n2 << " by " << 2 << " is : " << (n2 << 2) << endl;
    cout << "Bitwise >> (Right Shift) Operator for " << n1 << " by " << 2 << " is : " << (n1 >> 1) << endl;
    cout << "Bitwise >> (Right Shift) Operator for " << n2 << " by " << 2 << " is : " << (n2 >> 1) << endl;

    cout << "\n";

    return 0;
}