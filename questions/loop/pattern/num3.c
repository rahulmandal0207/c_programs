#include <stdio.h>
#include <conio.h>

/*

1 1 1 1 1
2 2 2 2 2
3 3 3 3 3
4 4 4 4 4
5 5 5 5 5

*/

void main()
{
    int r, c;
    for (r = 1; r <= 5; r++)
    {
        for (c = 1; c <= 5; c++)
        {
            printf("%d ", r);
        }
        printf("\n");
    }
    getch();
}