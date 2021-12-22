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
    int r, c, s;
    for (r = 1; r < 5; r++)
    {
        for (s = 1; s <= r; s++)
        {
            printf(" ");
        }
        for (c = 5; c >= r; c--)
        {
            printf("*");
        }
        printf("\n");
    }
    for (r = 1; r <= 5; r++)
    {
        for (s = 5; s >= r; s--)
        {
            printf(" ");
        }
        for (c = 1; c <= r; c++)
        {
            printf("*");
        }
        printf("\n");
    }
    getch();
}