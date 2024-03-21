#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fptr;
    fptr=fopen("Hello.txt","a");
    if(fptr==NULL)
    {
        printf("Error while trying to read from a file!!!!");
        exit(1);
    }
    char toAdd[1000];
    printf("Please enter the sentence to be added to the file Hello.txt file\n");
    fgets(toAdd,1000,stdin);

    fprintf(fptr,"%s",toAdd);


    fclose(fptr);

    fptr=fopen("Hello.txt","r");
    char ch;
    ch=fgetc(fptr);
    while(ch!=EOF)
    {
        printf("%c",ch);
        ch=fgetc(fptr);
    }
    printf("\n");
    fclose(fptr);
    return 0;
}