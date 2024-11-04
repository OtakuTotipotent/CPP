#include <iostream>
using namespace std;
int main()
{
    int nums[] = {7, 6, 2, 1, 2, 1, 6}; // size = 7
    for (int i = 0; i < 7; i++)
    {
        bool found = false;
        for (int j = 0; j < 7; j++)
        {
            if (j == i)
                continue;
            else
            {
                if (nums[i] == nums[j])
                {
                    found = true;
                    break;
                }
            }
        }
        if (!found)
            cout << nums[i];
    }

    return 0;
}