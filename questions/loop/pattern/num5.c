#include <stdio.h>
#include <conio.h>

/*

1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25

*/

void main()
{
    int r, c, i=1;
    for (r = 1; r <= 5; r++)
    {
        for (c = 1; c <= 5; c++)
        {
            printf("%d ", i);
            i++;
        }
        printf("\n");
    }
    getch();
}