#include<stdio.h>
void swap(int* ele1, int* ele2)
{
    int temp=*ele1;
    *ele1=*ele2;
    *ele2=temp;
}
void printArray(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void selectionSort(int arr[],int n)
{
    int i,j,max_index;
    for(i=0;i<n-1;i++)
    {
        max_index=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]>arr[max_index])
            {
                max_index=j;
            }
        }
        if(max_index!=i)
        swap(&arr[max_index],&arr[i]);
    }
}
int main()
{
    int arr[]={2,19,18,1,11,43,23,78,54,34};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("Before selection sort done on the array \n");
    printArray(arr,size);
    selectionSort(arr,size);
    printf("After selection sort done on the array \n");
    printArray(arr,size);
    return 0;

}