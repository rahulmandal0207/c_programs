#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    int bin;
    int dec = 0;
    int i = 0;
    int rem;
    printf("Enter binary number : ");
    scanf("%d", &bin);

    while (bin > 0)
    {
        rem = bin % 10;
        dec += pow(2, i);
        bin /= 10;
        i++;
    }
    printf("Decimal equivalent is : %d", dec);
}