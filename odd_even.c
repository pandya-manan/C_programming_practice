#include<stdio.h>
#include<stdbool.h>
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    bool flag=false;
    if(num%2==0)
    {
        flag=true;
        printf("The number %d is an even number %d",num,flag);
    }
    else
    {
        printf("The number %d is an odd number %d",num,flag);
    }
    return 0;

}