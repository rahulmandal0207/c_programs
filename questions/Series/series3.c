// sum of 9 + 99 + 999 + 9999...
#include <stdio.h>
#include <conio.h>

void main()
{
    int i, nine = 9, lastTerm, sum = 0;
    printf("Enter last term : ");
    scanf("%d", &lastTerm);
    for (i = 1; i <= lastTerm; i++)
    {
        printf("%d ",nine);
        sum += nine;
        nine = (nine * 10) + 9;
    }
    printf("\nSum is : %d", sum);
    getch();
}