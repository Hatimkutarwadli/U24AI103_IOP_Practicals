#include <stdio.h>

// Function to find the pivot element in a sorted and rotated array
int findPivot(int arr[], int low, int high) {
    if (high < low)
        return -1;
    if (high == low)
        return low;

    int mid = (low + high) / 2;

    // Check if mid itself is the pivot
    if (mid < high && arr[mid] > arr[mid + 1])
        return mid + 1;

    // Check if mid-1 is the pivot
    if (mid > low && arr[mid] < arr[mid - 1])
        return mid;

    // Decide whether to go to left half or right half
    if (arr[low] >= arr[mid])
        return findPivot(arr, low, mid - 1);
    else
        return findPivot(arr, mid + 1, high);
}

int main() {
    int arr[] = {5, 6, 7, 8, 9, 1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int pivot = findPivot(arr, 0, n - 1);

    if (pivot == -1) {
        printf("No pivot found in the array\n");
    } else {
        printf("Pivot element is %d at index %d\n", arr[pivot], pivot);
    }

    return 0;
}