// decimal to binary
#include <stdio.h>

#define size 10

void main()
{
    int dec;
    int bin[size];
    int i = 0;

    printf("Enter a decimal (base 10) number : ");
    scanf("%d", &dec);

    while (dec > 0)
    {
        bin[i] = dec % 2;
        dec /= 2;
        i++;
    }
    i--;
    while (i >= 0)
    {
        printf("%d", bin[i]);
        i--;
    }
}