#include <stdio.h>
#include <conio.h>

/*

ABCDE
ABCD
ABC
AB
A

*/

void main()
{
    int r, c;
    for (r = 5; r >= 1; r--)
    {
        for (c = 1; c <= r; c++)
        {
            printf("%c", 64 + c);
        }
        printf("\n");
    }
    getch();
}