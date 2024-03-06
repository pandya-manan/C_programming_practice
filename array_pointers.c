#include<stdio.h>
int main()
{
    int array[10];
    int* ptr=array;
    for(int i=0;i<10;i++)
    {
        printf("Enter a number\n");
        scanf("%d",&array[i]);

    }
    printf("\n");
    for(int i=0;i<10;i++)
    {
        printf("%d ",*(ptr+i));
    }
    
    return 0;
}