//program to calculate sum of digits of a number
#include <stdio.h>
#include <conio.h>

void main()
{
    int i, n, sum = 0, rem;
    printf("Enter a number : ");
    scanf("%d", &n);
    while (n != 0)
    {
        rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }
    printf("%d",sum);
    getch();
}