#include <stdio.h>
#include <conio.h>

/*

1
22
333
4444
55555

*/

void main()
{
    int r, c;
    for (r = 1; r <= 5; r++)
    {
        for (c = 1; c <= r; c++)
        {
            printf("%d", r);
        }
        printf("\n");
    }
    getch();
}