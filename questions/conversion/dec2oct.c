// decimal to octal
#include <stdio.h>
#include <conio.h>

#define size 10

void main()
{
    int dec;
    int oct[size];
    int i = 0;

    printf("Enter a decimal (base 10) number : ");
    scanf("%d", &dec);

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