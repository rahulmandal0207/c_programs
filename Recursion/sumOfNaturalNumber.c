#include <stdio.h>
#include <conio.h>

int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n + sum(n - 1);
    }
}

void main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int result = sum(n);
    printf("%d", result);
    getch();
}