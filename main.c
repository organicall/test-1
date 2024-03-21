

#include <stdio.h>

// Function to perform binary search
int binary_search(int arr[], int left, int right, int key) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key)
            return mid;
        if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1; 
}

int main() {
    int arr[100]; // Assuming maximum array size is 100
    int size, key;

    // Input size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input array elements
    printf("Enter the elements of the array in sorted order:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Input target element to search
    printf("Enter the key to search: ");
    scanf("%d", &key);

    // Perform binary search
    int result = binary_search(arr, 0, size - 1, key);
    if (result != -1)
        printf("Element %d found at index %d\n", key, result);
    else
        printf("Element %d not found in the array\n", key);

    // Print the array
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

