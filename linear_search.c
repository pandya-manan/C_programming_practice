#include <stdio.h>

#define MAX_SIZE 100  // Define a maximum array size for safety

int arr[MAX_SIZE];  // Declare the array with a fixed size
void takeInput(int arr[],int size);
int linearSearch(int arr[], int element, int size);
int main() {
    int size;  // Variable to store the actual size of the array

    printf("Enter the number of elements (up to %d):\n", MAX_SIZE);
    scanf("%d", &size);

    if (size > MAX_SIZE) {
        printf("Error: Array size cannot exceed %d.\n", MAX_SIZE);
        return 1;  // Indicate error
    }

    takeInput(arr, size);
    int element;
    printf("\nEnter the element to search for: ");
    scanf("%d", &element);

    int result = linearSearch(arr, element, size);

    if (result != -1) {
        printf("Element %d is present in the array at index %d.\n", element, result);
    } else {
        printf("Element %d is not present in the array.\n", element);
    }

    return 0;
}

void takeInput(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter element for position %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\n");
}

int linearSearch(int arr[], int element, int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return i;  // Return the index of the found element
        }
    }
    return -1;  // Element not found
}
