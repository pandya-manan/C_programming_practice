#include <stdio.h>

// Method to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Method to do insertion sort in descending order
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {65, 2, 4, 1, 18, 78, 54, 34, 39};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Before the Insertion Sort\n");
    printArray(arr, size);

    insertionSort(arr, size);

    printf("After the Insertion Sort\n");
    printArray(arr, size);

    return 0;
}
