#include <stdio.h>
#include <conio.h>

/*

******
******
******
******
******
******

*/

void main()
{
    int r, c, n = 5;
    // printf("Enter number of rows : ");
    // scanf("%d", &n);
    for (r = 0; r <= n; r++)
    {
        for (c = 0; c <= n; c++)
        {
            printf("* ");
        }
        printf("\n");
    }

    getch();
}