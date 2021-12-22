/* c program to sum two variables using pointers. */

#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b;

    int *aptr = &a;
    int *bptr = &b;

    printf("Enter two numbers : ");
    scanf("%d%d", aptr, bptr);

    int sum = *aptr + *bptr;

    printf("Sum : %d", sum);
}