//program to calculate sum of first N  natural no.
#include <stdio.h>
#include <conio.h>

void main()
{
    int n, i, sum = 0;
    printf("Enter a number : ");
    scanf("%d", &n); // 10
    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("%d", sum);

    getch();
}

