#include <iostream>

int main()
{
    int arr[] = {12, 7, 11, 5, 6, 2, 8, 10, 1, 15};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original array: ";
    for (int i = 0; i < arrSize; i++)
    {
        std::cout << arr[i] << " ";
    }

    // Merge Sort
    for (int current_size = 1; current_size < arrSize; current_size *= 2)
    {
        for (int left_start = 0; left_start < arrSize - 1; left_start += 2 * current_size)
        {
            int mid = std::min(left_start + current_size - 1, arrSize - 1);
            int right_end = std::min(left_start + 2 * current_size - 1, arrSize - 1);

            // Create temporary arrays
            int n1 = mid - left_start + 1;
            int n2 = right_end - mid;
            int L[n1], R[n2];

            // Copy data to temporary arrays L[] and R[]
            for (int i = 0; i < n1; i++)
                L[i] = arr[left_start + i];
            for (int j = 0; j < n2; j++)
                R[j] = arr[mid + 1 + j];

            // Merge the temporary arrays back into the original array
            int i = 0, j = 0, k = left_start;
            while (i < n1 && j < n2)
            {
                if (L[i] <= R[j])
                {
                    arr[k] = L[i];
                    i++;
                }
                else
                {
                    arr[k] = R[j];
                    j++;
                }
                k++;
            }

            // Copy the remaining elements of L[], if there are any
            while (i < n1)
            {
                arr[k] = L[i];
                i++;
                k++;
            }

            // Copy the remaining elements of R[], if there are any
            while (j < n2)
            {
                arr[k] = R[j];
                j++;
                k++;
            }
        }
    }
    std::cout << "\nSorted array: ";
    for (int i = 0; i < arrSize; i++)
    {
        std::cout << arr[i] << " ";
    }
    return 0;
}
