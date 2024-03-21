#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fptr;
    fptr=fopen("Demo.txt","r");
    if(fptr==NULL)
    {
        printf("Demo.txt is a new file hence need to create one\n");
        fptr=fopen("Demo.txt","w");
    }
    else
    {
        fptr=fopen("Demo.txt","a");
    }
    char sentence[10000];
    printf("Enter the content which needs to be added or written to Demo.txt file\n");
    fgets(sentence,10000,stdin);
    fprintf(fptr,"%s",sentence);
    fclose(fptr);
    fptr=fopen("Demo.txt","r");
    char ch;
    printf("Reading from the file \"Demo.txt\"\n");
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