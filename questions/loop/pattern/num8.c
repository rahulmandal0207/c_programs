#include <stdio.h>
#include <conio.h>

/*

1 2 3 4 5
2 4 6 8 10
3 6 9 12 15
4 8 12 16 20
5 10 15 20 25

*/

void main()
{
    int r, c;
    for (r = 1; r <= 10; r++)
    {
        for (c = 1; c <= 5; c++)
        {
            printf("%d ", r * c);
        }
        printf("\n");
    }
    getch();
}