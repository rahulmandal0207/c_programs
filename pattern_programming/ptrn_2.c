#include <stdio.h>
#include <conio.h>

/* 

* * * * *
*       *
*       *
*       *
* * * * * 

*/

void main()
{
    int r,c,n;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    for(r=1;r<=n;r++)
    {
        for(c=1;c<=n;c++)
        {
            if(r == 1 || c == 1 || r == n || c == n)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    getch();
}