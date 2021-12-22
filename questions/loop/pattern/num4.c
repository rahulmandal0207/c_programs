#include <stdio.h>
#include <conio.h>

/*

5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1


*/

void main()
{
    int r, c;
    for (r = 1; r <= 25; r++)
    {
        for (c = 25; c >= 1; c--)
        {
            printf("%d ", c);
        }
        printf("\n");
    }
    getch();
}