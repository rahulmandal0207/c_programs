#include <stdio.h>
#include <conio.h>

void main()
{
    int dec;
    int bin[64];
    int i = 0;

    printf("Enter a decimal number : ");
    scanf("%d", &dec);

    while (dec > 0)
    {
        bin[i] = dec % 2;
        dec /= 2;
        i++;
    }

    printf("Binary equivalent is : ");
    while (i--)
    {
        printf("%d", bin[i]);
    }
    getch();
}