#include <stdio.h>
#include <conio.h>

// not yet

void main()
{
    int r, c, row;
    int centerR, centerC;
    printf("Enter number of rows : ");
    scanf("%d", &row);

    centerR = (row + 1) / 2;
    centerC = (row + 1) / 2;

    for (r = 1; r <= row; r++)
    {
        for (c = 1; c <= row; c++)
        {
            if (centerR == c && centerC == c && centerC == r && centerR == r)
            {
                printf("%d ", 0);
            }
            else
            {
                printf("%d ", 1);
            }
        }
        printf("\n");
    }
    getch();
}