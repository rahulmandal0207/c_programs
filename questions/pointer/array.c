/* C program to copy array elements to another elements using pointers. */

#include <stdio.h>
#include <conio.h>

#define size 5

void main()
{
    int a[size] = {1, 2, 3, 4, 5};
    int b[size];

    int *aptr = a;
    int *bptr = b;

    int i;

    for (i = 0; i < size; i++)
    {
        *(bptr + i) = *(aptr + i);
    }

    for (i = 0; i < size; i++)
    {
        printf("%d ", *(aptr + i));
    }
}