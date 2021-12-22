#include <stdio.h>
#include <math.h>

int bin2dec(int bin);
int dec2oct(int dec);

void main()
{
    dec2oct(bin2dec(10100111));
}

int dec2oct(int dec)
{
    int oct[10];
    int i = 0;
    while (dec > 0)
    {
        oct[i] = dec % 8;
        dec /= 8;
        i++;
    }
    i--;
    while (i >= 0)
    {
        printf("%d", oct[i]);
        i--;
    }
}

int bin2dec(int bin)
{
    int dec = 0;
    int rem;
    int i = 0;

    while (bin != 0)
    {
        rem = bin % 10;
        dec = (rem * pow(2, i)) + dec;
        bin /= 10;
        i++;
    }
    return dec;
}