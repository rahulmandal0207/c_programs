// sum of 1 + 11 + 111 + 1111...
#include <stdio.h>
#include <conio.h>

void main()
{
    int i, one = 1, lastTerm, sum = 0;
    printf("Enter last term : ");
    scanf("%d", &lastTerm);
    for (i = 1; i <= lastTerm; i++)
    {
        sum += one;
        one = (one * 10) + 1;
    }
    printf("Sum is : %d", sum);
    getch();
}