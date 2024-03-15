#include<stdio.h>
#include<stdbool.h>
//Method used to swap the elements
void swap(int* ele1, int* ele2)
{
    int temp=*ele1;
    *ele1=*ele2;
    *ele2=temp;
}
//Method used for bubbleSort
void bubbleSort(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }
 
        // If no two elements were swapped by inner loop,
        // then break
        if (swapped == false)
            break;
    }
}
//Method used to print array
void printArray(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[]={10,4,6,3,8,6,11,12,13,12,11,8,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("Before doing bubble sort on the array\n");
    printArray(arr,size);
    bubbleSort(arr,size);
    printf("After doing bubble sort on the array\n");
    printArray(arr,size);
    return 0;
}