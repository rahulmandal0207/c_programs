// decimal to binary
#include <stdio.h>

void main()
{
    int dec;
    int bin;
    int rem;
    int place = 1;
    printf("Enter a decimal (base 10) number : ");
    scanf("%d", &dec);

    while (dec > 0)
    {
        rem = dec % 2;
        bin = (rem * place) + bin;
        dec /= 2;
        place *= 10;
    }

    printf("%d", bin);
}