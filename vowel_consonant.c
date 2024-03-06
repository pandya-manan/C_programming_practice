#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char alphabet[1];
    printf("Enter a character alphabet\n");
    scanf("%s",&alphabet);
    char alpha=alphabet[0];
    alphabet[0]=tolower(alphabet[0]);
    if(alphabet[0]=='a' || alphabet[0]=='e' || alphabet[0]=='i' || alphabet[0]=='o' || alphabet[0]=='u')
    {
        printf("The entered character %c is a vowel",alpha);
    }
    else
    {
        printf("The entered character %c is a consonant",alpha);
    }
    return 0;

}