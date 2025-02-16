#include <iostream>
#include <vector>
using namespace std;
vector<int> twoSum(vector<int> nums, int target)
{
    int n = nums.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
                return {i, j};
        }
    }
    return {};
}
int main()
{
    vector<int> nums;   // dynamic array
    int array_size = 5; // default array size
    cout << "Enter the length of the array: ";
    cin >> array_size; // user-given array size

    // Array filling
    for (int i = 0; i < array_size; i++)
    {
        int value;
        cout << "Enter value in array : ";
        cin >> value;
        nums.push_back(value);
    }

    int target; // twoSum target number (from user)
    cout << "\nWhat's the target number? : ";
    cin >> target;

    vector<int> indices = twoSum(nums, target);

    if (indices.size() > 0)
    {
        cout << "\nThe sum of " << nums[indices[0]] << " and " << nums[indices[1]] << " gives the target answer : " << target << endl
             << "From the array : ";
        for (int i = 0; i < array_size; i++)
            cout << nums[i] << " , ";
    }
    else
    {
        cout << "\n\nNo match found for target : " << target;
    }
    return 0;
}