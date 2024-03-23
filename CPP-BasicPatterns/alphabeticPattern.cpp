#include <iostream>
using namespace std;

int main()
{
    int outer, times;
    char fst, lst, inner;
    cout << "Enter the 1st letter : ";
    cin >> fst;
    cout << "Enter the last letter: ";
    cin >> lst;
    cout << "Enter rows count : ";
    cin >> times;
    for (outer = 0; outer < times; outer++)
    {
        for (inner = fst; inner <= lst; inner++)
            cout << inner << "  ";
        cout << endl;
    }
    return 0;
}