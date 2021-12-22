#include <stdio.h>
#include <math.h>
#include <string.h>

int bin2dec(int bin);
void dec2hex(int dec);

void main()
{
    int bin;

    printf("Enter a binary number : ");
    scanf("%d", &bin);
    dec2hex(bin2dec(bin));
}

void dec2hex(int dec)
{
    char hex_values[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    char hex[10];
    int i = 0;
    int rem;

    while (dec > 0)
    {
        rem = dec % 16;
        hex[i] = hex_values[rem];
        dec /= 16;
        i++;
    }
    hex[i] = '\0';
    strrev(hex);
    printf("%s", hex);
}

int bin2dec(int bin)
{
    int dec = 0;
    int last;
    int i = 0;

    while (bin != 0)
    {
        last = bin % 10;
        dec = (last * pow(2, i)) + dec;
        bin /= 10;
        i++;
    }
    return dec;
}