#include <stdio.h>
#include <math.h>

void main()
{
    int bin;
    int rem;
    int dec = 0;
    int i = 0;

    printf("Enter a binary (base 2) number : ");
    scanf("%d", &bin);

    while (bin > 0)
    {
        rem = bin % 10;
        dec += (rem * pow(2, i));
        bin /= 10;
        i++;
    }
    printf("%d", dec);
}