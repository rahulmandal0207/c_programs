/* c program to swap the values of two variables using pointers. */

#include <stdio.h>
#include <conio.h>

void swap(int *num1, int *num2)
{
    int temp;
    printf("a = %d , b = %d\n", *num1, *num2);

    temp = *num1;
    *num1 = *num2;
    *num2 = temp;

    printf("a = %d , b = %d", *num1, *num2);
}

void main()
{
    int a = 5;
    int b = 4;

    swap(&a, &b);
}