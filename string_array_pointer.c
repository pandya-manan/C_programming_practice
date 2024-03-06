/* Online C Compiler and Editor */
#include <stdio.h>

int main()
{
 char name[5];
 printf("Enter a name\n");
 scanf("%s",&name);
 int length=5;
 char* namePtr=&name;
 printf("%.*s\n", length, namePtr + 1);
 return 0;  
   
}