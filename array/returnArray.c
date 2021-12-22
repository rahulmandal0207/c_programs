#include <stdio.h>
#include <conio.h>

int *get_even()
{
    static int num[5];
    int i;
    int even = 0;

    for (i = 0; i < 5; i++)
    {
        num[i] = even = even + 2;
    }
    return (num);
}

void main()
{
    int *a;
    int j;

    a = get_even();
    for (j = 0; j < 5; j++)
    {
        printf("%d ", a[j]);
    }
}
