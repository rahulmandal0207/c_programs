//  1 + x^2/2! + x^4/4! + ...
#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    int i, j, k = 1, lastTerm, fact = 1;
    float x, term, sum = 0;

    printf("Enter x : ");
    scanf("%f", &x);

    printf("Enter last term : ");
    scanf("%d", &lastTerm);

    for (i = 0; i <= lastTerm; i += 2)
    {
        fact = 1;
        for (j = 1; j <= i; j++)
        {
            fact *= j;
        }
        term = pow(x, i) / fact;
        sum += term;
        printf("\nValue of term %d = %.4f", k, term);
        k++;
    }
    printf("\nSum of all terms : %.4f", sum);
    getch();
}