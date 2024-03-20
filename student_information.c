#include <stdio.h>
#include <string.h>

struct Subject {
  char name[15];
  int marks;
};

struct Student {
  int roll;
  char firstName[15];
  char lastName[15];
  struct Subject subject[3];
};

int main() {
  
  struct Student student;

  printf("Enter the first name of the student\n");
  scanf("%s", student.firstName);
  printf("Enter the last name of the student\n");
  scanf("%s", student.lastName);
  // Roll number input is missing in your code.
  printf("Enter the roll number of the student\n");
  scanf("%d", &student.roll);

  for (int i = 0; i < 3; i++) {
    printf("Enter the subject name for position %d\n", i + 1);
    scanf("%s", student.subject[i].name);
    printf("Enter the subject marks for position %d\n", i + 1);
    scanf("%d", &student.subject[i].marks);
  }

  

  printf("Name of the student is %s %s\n", student.firstName, student.lastName);
  printf("The roll number of the student is %d\n", student.roll);

  for(int i = 0; i < 3; i++) {
    printf("Subject name: %s\n", student.subject[i].name);
    printf("Subject marks: %d\n", student.subject[i].marks);
  }

  return 0;
}
