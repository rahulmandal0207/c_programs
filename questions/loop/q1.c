// print first  N natural no in reverse

#include <stdio.h>
#include <conio.h>

void main()
{
    int n, i;
    printf("Enter a number : ");
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {
        printf("%d ", i);
    }
    getch();
}