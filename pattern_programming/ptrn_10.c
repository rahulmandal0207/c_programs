#include <stdio.h>
#include <conio.h>

/*

1
23
456
78910
1112131415

*/

void main()
{
    int r, c, n = 1;
    for (r = 1; r <= 5; r++)
    {
        for (c = 1; c <= r; c++)
        {
            printf("%d", n);
            n++;
        }
        printf("\n");
    }
    getch();
}