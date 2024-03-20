#include<stdio.h>
void printMonthName(int num)
{
    char *months[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    if(num>=1 && num<=12)
    {
        printf("%s\n",*(months+(num-1)));
    }
    else
    {
        printf("Invalid Month\n");
    }

}
int main()
{
    int number;
    printf("Enter the month number\n");
    scanf("%d",&number);
    printMonthName(number);
    return 0;
}