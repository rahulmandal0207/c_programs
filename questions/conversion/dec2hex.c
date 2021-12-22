// decimal to hex
#include <stdio.h>
#include <string.h>

void main()
{
    int dec;
    int rem;
    char hex_symbols[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    char hex[10];
    int i = 0;
    printf("Enter a decimal (base 10) number : ");
    scanf("%d", &dec);
    while (dec > 0)
    {
        rem = dec % 16;
        hex[i] = hex_symbols[rem];
        dec /= 16;
        i++;
    }
    strrev(hex);
    printf("%s", hex);
}