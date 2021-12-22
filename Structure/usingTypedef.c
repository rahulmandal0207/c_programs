#include <stdio.h>
#include <conio.h>

typedef struct
{
	int id;
	char grade;
	char name[40];
} student;

void main()
{
	student s1;

    s1.id = 25;
    s1.grade = 'A';
    s1.name = "Rahul";

	getch();
}