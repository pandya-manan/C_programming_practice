#include<stdio.h>
struct Address
{
    char house[150];
    char city[20];
    char state[15];
    
};
typedef struct Address Address;
struct Student
{
    char name[15];
    int marks;
    Address address;

};
typedef struct Student Student;
int main()
{
    Address address1={"123,Satya Nivas","Junagadh","Gujarat"};
    Student student1={"Dinesh",450,address1};
    printf("The name of the student is %s\n",student1.name);
    printf("The marks of the student is %d\n",student1.marks);
    printf("The house of the student is %s\n",student1.address.house);
    printf("The city where the student is present at %s\n",student1.address.city);
    printf("The state where the student is present at %s\n",student1.address.state);
    return 0;
}