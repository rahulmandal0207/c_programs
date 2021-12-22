#include <stdio.h>
#include <conio.h>

void main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int *ptr = arr;
    int i;
    for (i = 0; i < 6; i++)
    {
        printf("%d ", *(ptr + i));
    }
}