#include <iostream>
#include <vector>
using namespace std;
void reverseVector(vector<int> *nm) //? vector reversion
{
    int size = nm->size();
    for (int i = 0; i < size / 2; i++)
    {
        int temp = nm->at(i);
        nm->at(i) = nm->at(size - 1 - i);
        nm->at(size - 1 - i) = temp;
    }
}
int main() //? main method ()
{
    vector<int> nums = {1, 2, 3, 4};

    // printing original vector
    cout << "\nOriginal :\t";
    for (int val : nums)
        cout << val << '\t';
    cout << endl;

    // reversing vector
    reverseVector(&nums);

    cout << "\nReversed :\t";
    for (int val : nums)
        cout << val << '\t';

    return 0;
}