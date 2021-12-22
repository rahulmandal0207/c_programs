#include <stdio.h>
#include <conio.h>

int isPrime(int num)
{
    int i;
    int factor = 1;
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            factor++;
        }
    }
    if (factor == 1)
        return 1;
    return 0;
}

int isPerfect(int n)
{
    int i;
    int sum = 0;
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (n == sum)
        return 1;
    return 0;
}

void main()
{
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);

    if (isPerfect(number))
    {
        printf("%d is perfect number\n", number);
    }
    else
    {
        printf("%d is not perfect number\n", number);
    }

    if (isPrime(number))
    {
        printf("%d is prime number\n", number);
    }
    else
    {
        printf("%d is not prime number\n", number);
    }
}