#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    if(num==0)
    {
        printf("The number %d is zero",num);
    }
    else if (num>0)
    {
        printf("The number %d is positive",num);
    }
    else if(num<0)
    {
        printf("The number %d is negative",num);
    }
    else
    {
        printf("It is not a number");
    }
    return 0;
}