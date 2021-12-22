#include <stdio.h>
#include <conio.h>

void printPrime(int start, int end)
{
    int i = 1;
    while (start <= end)
    {
        if (isPrime(start))
        {
            printf("%d ", start);
        }
        start++;
    }
}

int isPrime(int n)
{
    int i;
    int factor = 1;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            factor++;
        }
    }
    if (factor == 1)
    {
        return 1;
    }
    return 0;
}

void main()
{
    printPrime(11, 20);
}