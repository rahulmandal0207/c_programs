#include <stdio.h>
#include <conio.h>

void main()
{
    int a = 5;
    int *ptr = &a;
    int **ptr2 = &ptr;
    int **ptr3 = &*ptr2;

    printf("Value of a : %d \n", a);
    printf("Address of a : %x \n", ptr);
    printf("Value of a : %d \n", *ptr);

    printf("Address of ptr : %x \n", &ptr);
    printf("Address of ptr : %x \n", ptr2);
    printf("Value of a : %d\n", **ptr2);

    printf("Address of ptr2 : %x \n",&ptr2);
    printf("Address of ptr2 : %x \n", ptr3);
    printf("Value of a : %d\n", **ptr3);
}