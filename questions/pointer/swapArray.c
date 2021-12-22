#include <stdio.h>
#include <conio.h>

#define size 5

void main()
{
    int a[size] = {1, 2, 3, 4, 5};
    int b[size] = {6, 7, 8, 9, 10};

    int *aptr = a;
    int *bptr = b;

    int i, temp;

    for (i = 0; i < size; i++)
    {
        temp = *(aptr + i);
        *(aptr + i) = *(bptr + i);
        *(bptr + i) = temp;
    }

    for (i = 0; i < size; i++)
    {
        printf("%d ", *(aptr + i));
    }
    printf("\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", *(bptr + i));
    }
}