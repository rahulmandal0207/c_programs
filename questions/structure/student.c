#include <stdio.h>
#include <conio.h>

#define size 3

struct Student
{
    int roll;
    char name[30];
    int total_marks;
};

void main()
{
    struct Student s1[size];

    int i;
    for (i = 0; i < size; i++)
    {
        printf("Enter roll no. for student %d : ", i + 1);
        scanf("%d", &s1[i].roll);
        printf("Enter name for student %d : ", i + 1);
        scanf("%s", s1[i].name);
        printf("Enter total marks for student %d : ", i + 1);
        scanf("%d", &s1[i].total_marks);
    }
    printf("\n");
    for (i = 0; i < size; i++)
    {
        printf("Name : %s \n", s1[i].name);
        printf("Roll no. : %d \n", s1[i].roll);
        printf("Total marks : %d \n", s1[i].total_marks);
        printf("\n");
    }

    getch();
}