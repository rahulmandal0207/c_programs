#include <stdio.h>
#include <conio.h>
#include <string.h>

struct student
{
    int id;
    char grade;
    char name[40];
};

void printData(struct student *st)
{
    printf("Student name is : %s \n", (*st).name);
    printf("Id : %d \n", st->id);
    printf("Grade : %c \n\n", st->grade);
}

void main()
{
    struct student s1;
    struct student s2;

    strcpy(s1.name, "Rahul");

    s1.id = 25;
    s1.grade = 'A';

    strcpy(s2.name, "Krishna");
    s2.id = 24;
    s2.grade = 'B';

    printData(&s1);
    printData(&s2);

    getch();
}