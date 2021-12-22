#include <stdio.h>
#include <conio.h>

int r, c, s, i, n;

/*

*
**
***
****
*****

*/
void star1()
{
    for (r = 1; r <= 5; r++)
    {
        for (c = 1; c <= r; c++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

/*

*
*       *
*       *       *
*       *       *       *
*       *       *       *       *

*/
void star2()
{
    for (r = 1; r <= 5; r++)
    {
        for (c = 1; c <= r; c++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}

/*

*****
****
***
**
*

*/
void star3()
{
    for (r = 1; r <= 5; r++)
    {
        for (c = 5; c >= r; c--)
        {
            printf("*");
        }
        printf("\n");
    }
}

/*

*****
 ****
  ***
   **
    *

*/
void star4()
{
    for (r = 1; r <= 5; r++)
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
}

/*

    *
   **
  ***
 ****
*****

*/
void star5()
{
    for (r = 1; r <= 5; r++)
    {
        for (s = 1; s < r; s++)
        {
            printf(" ");
        }
        for (c = 5; c > r; c--)
        {
            printf("*");
        }
        printf("\n");
    }
}

/*

    *
   * *
  * * *
 * * * *
* * * * *

*/
void star6(n)
{
    for (r = 1; r <= n; r++) // row
    {
        for (s = n; s > r; s--)  // space
        {
            printf(" ");
        }
        for (c = 1; c <= r; c++)  // star
        {
            printf("* ");
        }
        printf("\n");
    }
}

/*

* * * * *
 * * * *
  * * *
   * *
    *

*/
void star7()
{
    for (r = 1; r <= 5; r++)
    {
        for (s = 1; s < r; s++)
        {
            printf(" ");
        }
        for (c = 5; c >= r; c--)
        {
            printf("* ");
        }
        printf("\n");
    }
}

/*

*
**
***
****
*****
****
***
**
*

*/
void star8()
{
    for (r = 1; r <= 5; r++)
    {
        for (c = 1; c <= r; c++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (r = 1; r <= 5; r++)
    {
        for (c = 5; c > r; c--)
        {
            printf("* ");
        }
        printf("\n");
    }
}

/*

0 
1 2
3 4 5
6 7 8 9
10 11 12 13 14

*/
void num1()
{
    for (r = 1; r <= 5; r++)
    {
        for (c = 1; c <= r; c++)
        {
            printf("%d ", i);
            i++;
        }
        printf("\n");
    }
}

/*

A
B C
D E F
G H I J
K L M N O

*/
void letter1()
{
    i = 65;
    for (r = 1; r <= 5; r++)
    {
        for (c = 1; c <= r; c++)
        {
            printf("%c ", i);
            i++;
        }
        printf("\n");
    }
}

void main()
{
    // call the functions
    
    getch();
}