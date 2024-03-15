#include<stdio.h>
//Method to print the array elements
void printArray(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
//Method to do insertion sort on the array
void insertionSort(int arr[],int size)
{
    int i,key,j;
    for(i=0;i<size;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}
int main()
{
    int arr[]={9,2,1,16,32,12,23,45,32,43,12};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("Before Insertion Sort\n");
    printArray(arr,size);
    insertionSort(arr,size);
    printf("After Insertion Sort\n");
    printArray(arr,size);
    return 0;
}