#include <stdio.h>
#include <conio.h>

/*

A
AB
ABC
ABCD
ABCDE

*/

void main()
{
    int r, c;
    for (r = 1; r <= 200; r++)
    {
        for (c = 1; c <= r; c++)
        {
            printf("%c", 64 + c);
        }
        printf("\n");
    }
    getch();
}