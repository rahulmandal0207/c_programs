/* WAP in c to find frequency of each digits in a given integer */

#include <stdio.h>
#include <conio.h>

void main()
{
    int digit;
    int count[10];
    int rem;
    int i;

    printf("Enter a number : ");
    scanf("%d", &digit);

    for (i = 0; i < 10; i++)
    {
        count[i] = 0;
    }

    while (digit != 0)
    {
        rem = digit % 10;
        count[rem]++;
        digit /= 10;
    }

    for (i = 0; i < 10; i++)
    {
        printf("The frequency of %d is %d times \n", i, count[i]);
    }
}