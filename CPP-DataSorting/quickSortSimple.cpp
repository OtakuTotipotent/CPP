#include <iostream>
#include <algorithm>

int main() {
    int arr[] = {12, 7, 11, 5, 6, 2, 8, 10, 1, 15};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original array: ";
    for (int i = 0; i < arrSize; i++) {
        std::cout << arr[i] << " ";
    }

    // Quicksort
    int stack[arrSize];
    int top = -1;

    stack[++top] = 0;
    stack[++top] = arrSize - 1;

    while (top >= 0) {
        int high = stack[top--];
        int low = stack[top--];

        int pivot = arr[high];
        int i = low - 1;

        for (int j = low; j < high; j++) {
            if (arr[j] <= pivot) {
                i++;
                std::swap(arr[i], arr[j]);
            }
        }

        std::swap(arr[i + 1], arr[high]);
        int pivotIndex = i + 1;

        if (pivotIndex - 1 > low) {
            stack[++top] = low;
            stack[++top] = pivotIndex - 1;
        }

        if (pivotIndex + 1 < high) {
            stack[++top] = pivotIndex + 1;
            stack[++top] = high;
        }
    }

    std::cout << "\nSorted array: ";
    for (int i = 0; i < arrSize; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
