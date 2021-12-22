// x - x^3 + x^5 - ...
#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    int i, x, sum = 0, numberOfTerms, counter = 1;
    printf("Enter the value of x : ");
    scanf("%d", &x);
    printf("Enter number of terms : ");
    scanf("%d", &numberOfTerms);
    for (i = 1; i <= numberOfTerms; i += 2)
    {
        if (counter % 2 == 0)
            sum -= pow(x, i);
        else
            sum += pow(x, i);
        counter++;
    }
    printf("Sum is : %d", sum);
    getch();
}