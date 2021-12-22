#include <stdio.h>
#include <conio.h>

/*

1 1 1 1 1
1 0 0 0 1
1 0 0 0 1
1 0 0 0 1
1 1 1 1 1

*/

void main()
{
    int r, c;
    for (r = 1; r <= 5; r++)
    {
        for (c = 1; c <= 5; c++)
        {
            if (r == 1 || c == 1 || r == 5 || c == 5)
            {
                printf("%d ", 1);
            }
            else
            {
                printf("%d ", 0);
            }
        }
        printf("\n");
    }
    getch();
}