#include <iostream>
#include <iomanip>
using namespace std;
void interChange(int &n1, int &n2)
{
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}
int main()
{
    int i, j, x;
    cout << "Enter size : ";
    cin >> x;
    int n[x];
    // TAKING INPUTS
    for (i = 0; i < x; i++)
    {
        cout << "Enter number : ";
        cin >> n[i];
    }

    // SEQUENCIAL SORTING
    for (i = 0; i < x - 1; i++)
    {
        for (j = i + 1; j < x; j++)
        {
            if (n[i] > n[j]) // ASCENDING SORTING
                interChange(n[i], n[j]);
        }
    }
    cout << "\nData sorted in Ascending Order using Sequencial Sorting Technique as :: ";
    for (i = 0; i < x; i++)
    {
        cout << setw(6) << n[i];
        if (i != x - 1)
            cout << setw(4) << '<';
    }

    // BUBBLE SORTING
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < (x - 1 - i); j++)
        {
            if (n[j] < n[j + 1]) // Descending Sorting
                interChange(n[j], n[j + 1]);
        }
    }
    cout << "\nData sorted in Ascending Order using Bubble Sorting Technique as     :: ";
    for (i = 0; i < x; i++)
    {
        cout << setw(6) << n[i];
        if (i != x - 1)
            cout << setw(4) << '>';
    }

    return 0;
}