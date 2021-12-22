#include <stdio.h>
#include <conio.h>

/*

 *********
  *******
   *****
    ***
     *

*/

void main()
{
    int r, c, s, n;
    printf("Enter number of rows : ");
    scanf("%d", &n);
    for (r = 1; r <= n; r++)
    {
        for (s = 1; s < r; s++)
        {
            printf(" ");
        }
        for (c = (2 * n - 1); c >= (2 * r - 1); c--)
        {
            printf("*");
        }
        printf("\n");
    }
}
