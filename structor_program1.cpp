#include <stdio.h>
#include <string.h>

struct student
{
    int rollNo, marks;
    char name[20];
};

int main()
{
    student stud1, stud2, stud3, stud4, stud5;
    
    stud1.rollNo = 1;
    stud1.marks = 98;
    strcpy(stud1.name, "Sunjay");
    stud2.rollNo = 2;
    stud2.marks = 89;
    strcpy(stud2.name, "Om");
    stud3.rollNo = 3;
    stud3.marks = 88;
    strcpy(stud3.name, "Onkar");
    stud4.rollNo = 4;
    stud4.marks = 99;
    strcpy(stud4.name, "Viraj");
    stud5.rollNo = 5;
    stud5.marks = 77;
    strcpy(stud5.name, "Raj");

    printf("Name of student1 - %s\n", stud1.name);
    printf("RollNo of student1 - %d\n", stud1.rollNo);
    printf("Marks of student1 - %d\n", stud1.marks);
    printf("Name of student2 - %s\n", stud2.name);
    printf("RollNo of student2 - %d\n", stud2.rollNo);
    printf("Marks of student2 - %d\n", stud2.marks);
    printf("Name of student3 - %s\n", stud3.name);
    printf("RollNo of student3 - %d\n", stud3.rollNo);
    printf("Marks of student3 - %d\n", stud3.marks);
    printf("Name of student4 - %s\n", stud4.name);
    printf("RollNo of student4 - %d\n", stud4.rollNo);
    printf("Marks of student4 - %d\n", stud4.marks);
    printf("Name of student5 - %s\n", stud5.name);
    printf("RollNo of student5 - %d\n", stud5.rollNo);
    printf("Marks of student5 - %d\n", stud5.marks);
    return 0;
}