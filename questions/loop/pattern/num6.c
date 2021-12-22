#include <stdio.h>
#include <conio.h>

/*

1 3 5 7 9
11 13 15 17 19
21 23 25 27 29
31 33 35 37 39
41 43 45 47 49

*/

void main()
{
    int r, c, i = 1;
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