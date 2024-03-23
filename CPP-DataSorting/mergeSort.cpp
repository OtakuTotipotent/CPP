#include <iostream>
void merge(int arr[], int left, int mid, int right) // Merge function to merge two sorted halves of an array
{
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int L[n1], R[n2];            // Create temporary arrays
    for (int i = 0; i < n1; i++) // Copy data to temporary arrays L[] and R[]
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];
    int i = 0, j = 0, k = left; // Merge the temporary arrays back into the original array
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
    while (i < n1) // Copy the remaining elements of L[], if there are any
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) // Copy the remaining elements of R[], if there are any
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int left, int right) // Merge Sort function
{
    if (left < right)
    {
        int mid = left + (right - left) / 2; // Same as (left+right)/2, but avoids overflow for large left and right
        mergeSort(arr, left, mid);           // Sort first and second halves
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right); // Merge the sorted halves
    }
}
int main()
{
    int arr[] = {12, 7, 11, 5, 6, 2, 8, 10, 1, 15};
    int arrSize = sizeof(arr) / sizeof(arr[0]); // finding size of array
    std::cout << "Original array: ";
    for (int i = 0; i < arrSize; i++)
    {
        std::cout << arr[i] << " ";
    }
    mergeSort(arr, 0, arrSize - 1); // Perform merge sort
    std::cout << "\nSorted array: ";
    for (int i = 0; i < arrSize; i++)
    {
        std::cout << arr[i] << " ";
    }
    return 0;
}
