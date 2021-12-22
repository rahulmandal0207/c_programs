// harmonic series
#include <stdio.h>
#include <conio.h>

void main()
{
    int numberOfTerms, i;
    float sum = 0;
    printf("Enter number of term : ");
    scanf("%d", &numberOfTerms);
    for (i = 1; i <= numberOfTerms; i++)
    {
        sum += 1 / (float)i;
    }
    printf("nth term : 1/%d\n", numberOfTerms);
    printf("Sum is : %f", sum);
    getch();
}