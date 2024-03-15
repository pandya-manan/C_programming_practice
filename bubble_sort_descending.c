#include<stdio.h>
#include<stdbool.h>
//Method to do swapping of elements
void swap(int* ele1,int* ele2)
{
    int temp=*ele1;
    *ele1=*ele2;
    *ele2=temp;
}
//Method to print elements of the array
void printArray(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
//Method to do bubble sort in descending order
void bubbleSort(int arr[],int size)
{
    int i,j;
    bool swapped;
    for(i=0;i<size-1;i++)
    {
        swapped=false;
        for(j=0;j<size-i-1;j++)
        {
            if(arr[j]<arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
                swapped=true;
            }
        }
        if(swapped==false)
        break;
    }
}

int main()
{
    int arr[]={64,32,31,36,39,23,12,0,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("Array before doing bubble sort\n");
    printArray(arr,size);
    printf("Array after doing bubble sort\n");
    bubbleSort(arr,size);
    printArray(arr,size);
    return 0;
}