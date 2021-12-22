// 1 + x + x^2/2! + x^3/3!+...
#include <stdio.h>
#include <conio.h>
#include <math.h>

int fact(int n)
{
    if (n == 0)
        return 1;
    else
        return n * fact(n - 1);
}

void main()
{
    int i, x, numberOfTerms;
    float sum = 0;
    printf("Enter the value of x : ");
    scanf("%d", &x);
    printf("Enter number of terms : ");
    scanf("%d", &numberOfTerms);
    for (i = 0; i <= numberOfTerms; i++)
    {
        sum += pow(x, i) / fact(i);
    }
    printf("Sum is : %f",sum);
    getch();
}