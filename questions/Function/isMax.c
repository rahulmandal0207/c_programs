#include <stdio.h>
#include <conio.h>

void isMax(int n1, int n2)
{
    if (n1 == n2)
    {
        printf("Both are equal.");
    }
    else if (n1 > n2)
    {
        printf("%d is Maximum.", n1);
    }
    else
    {
        printf("%d is Maximum.", n2);
    }
}

void main()
{
    isMax(6,6);
}