#include <stdio.h>
#include <conio.h>

/*

2 4 6 8 10
12 14 16 18 20
22 24 26 28 30
32 34 36 38 40
42 44 46 48 50

*/

void main()
{
    int r, c, i = 2;
    for (r = 1; r <= 5; r++)
    {
        for (c = 1; c <= 5; c++)
        {
            printf("%d ", i);
            i += 2;
        }
        printf("\n");
    }
    getch();
}