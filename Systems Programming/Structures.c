#include <stdio.h>
#include <unistd.h>
#include <string.h>

struct student
{
    char course[20];
    char regno[15];
    char hometown[10];
    char name[50];
};
int main()
{

    struct student student1, student2, student3;
    struct student student4 = {"Mechatronics", "54321", "Nyeri", "John"};

    struct student student5 = {.course = "Food Science", .hometown = "Nyahururu", .name = "Keith", .regno = "12345"};

    strcpy(student1.course, "Computer Science");
    strcpy(student1.hometown, "Kco");
    strcpy(student1.name, "Oyori");
    strcpy(student1.regno, "10293");

    strcpy(student2.course, "IT");
    strcpy(student2.hometown, "Nanyuki");
    strcpy(student2.name, "Mary");
    strcpy(student2.regno, "67890");

    strcpy(student3.course, "Mechanical");
    strcpy(student3.hometown, "Karatina");
    strcpy(student3.name, "Roy");
    strcpy(student3.regno, "09876");

    printf("Student1: \n");
    printf("Name: %s \tCourse: %s \tReg No: %s \tHometown: %s \t", student1.name, student1.course, student1.regno, student1.hometown);

    printf("\nStudent2: \n");
    printf("Name: %s\tCourse: %s \tReg No: %s \tHometown: %s \t", student2.name, student2.course, student2.regno, student2.hometown);

    printf("\nStudent3: \n");
    printf("Name: %s \t Course: %s \t Reg No: %s \t Hometown: %s \t", student3.name, student3.course, student3.regno, student3.hometown);

    printf("\nStudent4: \n");
    printf("Name: %s \t Course: %s \t Reg No: %s \t Hometown: %s \t", student4.name, student4.course, student4.regno, student4.hometown);

    printf("\nStudent5: \n");
    printf("Name: %s \t Course: %s \t Reg No: %s \t Hometown: %s \n", student5.name, student5.course, student5.regno, student5.hometown);
}