#include <stdio.h>
#include <conio.h>

struct Employee
{
    char name[30];
    int id;
    int age;
    int present_days;
    double total_salary;
};

void main()
{
    struct Employee e1;
    struct Employee e2;

    printf("Enter name of the employee : ");
    scanf("%s", e1.name);
    printf("Enter id of the employee : ");
    scanf("%d", &e1.id);
    printf("Enter age of the employee : ");
    scanf("%d", &e1.age);
    printf("Enter total number of day present in this month : ");
    scanf("%d", &e1.present_days);
    printf("Enter total salary of the employee : ");
    scanf("%lf", &e1.total_salary);

    printf("\n");
    printf("Name of the employee : %s \n", e1.name);
    printf("Id of the employee : %d \n", e1.id);
    printf("Age of the emnployee : %d \n", e1.age);
    printf("Number of days present in this month : %d \n", e1.present_days);
    printf("Total salary : %lf \n", e1.total_salary);

    printf("\n");
    printf("Enter name of the employee : ");
    scanf("%s", e2.name);
    printf("Enter id of the employee : ");
    scanf("%d", &e2.id);
    printf("Enter age of the employee : ");
    scanf("%d", &e2.age);
    printf("Enter total number of day present in this month : ");
    scanf("%d", &e2.present_days);
    printf("Enter total salary of the employee : ");
    scanf("%lf", &e2.total_salary);

    printf("\n");
    printf("Name of the employee : %s \n", e2.name);
    printf("Id of the employee : %d \n", e2.id);
    printf("Age of the employee : %d \n", e2.age);
    printf("Number of days present in this month : %d \n", e2.present_days);
    printf("Total salary : %lf \n", e2.total_salary);
}