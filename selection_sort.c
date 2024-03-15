#include<stdio.h>
//Method to swap elements
void swap(int* ele1, int* ele2)
{
    int temp=*ele1;
    *ele1=*ele2;
    *ele2=temp;
}
//Method to perform the selection sort
void selectionSort(int arr[],int n)
{
    int i,j,min_index;
    for(i=0;i<n-1;i++)
    {
        min_index=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min_index])
            {
                min_index=j;
            }
        }
        if(min_index!=i)
        swap(&arr[i],&arr[min_index]);
    }

}
//Method to print array elements
void printArray(int arr[],int n)
{
    int i;
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[]={12,1,4,2,19,20,18,24,21};
    printf("Before selection sort of the array\n");
    int size=sizeof(arr)/sizeof(arr[0]);
    printArray(arr,size);
    selectionSort(arr,size);
    printf("After selection sort of the array\n");
    printArray(arr,size);
    return 0;
}