#include <stdio.h>
//Binary Search Program
int binarySearch(int arr[], int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2;  // Avoid integer overflow by using this calculation
        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;  // Element not found
}
//Driver code
int main() {
    int size;
    int element;

    printf("Enter the size of the array\n");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Invalid array size. Please enter a positive integer.\n");
        return 1;  // Indicate error
    }

    int arr[size];
    printf("Enter the elements of the array in sorted order:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be found\n");
    scanf("%d", &element);

    int result = binarySearch(arr, 0, size - 1, element);

    if (result != -1) {
        printf("The element %d is found at position %d\n", element, result);
    } else {
        printf("The element %d is not found in the array\n", element);
    }

    return 0;
}
