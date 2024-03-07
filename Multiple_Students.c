#include <stdio.h>
#include <stdlib.h>

struct Address {
    char house[150];
    char city[20];
    char state[15];
};

typedef struct Address Address;

struct Student {
    char name[15];
    int marks;
    Address address;
};

typedef struct Student Student;

int main() {
    int numberOfStudents;

    printf("Enter the number of students\n");
    scanf("%d", &numberOfStudents);

    Student students[numberOfStudents];

    for (int i = 0; i < numberOfStudents; i++) {
        printf("Enter the name of the student %d:\n", i+1);
        scanf("%s", students[i].name); 

        printf("Enter the marks obtained by the student %d:\n", i+1);
        scanf("%d", &students[i].marks);

        printf("Enter the house address of the student %d:\n", i+1);
        scanf("%s", students[i].address.house); 

        

        printf("Enter the state where the student lives %d:\n", i+1);
        scanf("%s", students[i].address.state); 

        

        printf("Enter the city where the student lives %d:\n", i+1);
        scanf("%s", students[i].address.city); 

        
    }

    printf("\n");
    printf("Name\tMarks\tHouse\t\t\tCity\t\tState\n");

    for (int i = 0; i < numberOfStudents; i++) {
        printf("%s\t%d\t%s\t\t\t%s\t\t%s\n", students[i].name, students[i].marks,
               students[i].address.house, students[i].address.city, students[i].address.state);
        printf("\n");
    }

    return 0;
}
