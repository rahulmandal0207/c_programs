#include <stdio.h>
#include <conio.h>

/*

*****
****
***
**
*
**
***
****
*****

*/

void main()
{
    int r, c, n;
    printf("Enter number of rows : ");
    scanf("%d", &n);
    for (r = 1; r < n; r++)
    {
        for (c = n; c >= r; c--)
        {
            printf("*");
        }
        printf("\n");
    }
    for (r = 1; r <= n; r++)
    {
        for (c = 1; c <= r; c++)
        {
            printf("*");
        }
        printf("\n");
    }
}