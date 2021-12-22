#include <stdio.h>

#define size 4

void main()
{
    int arr[size][size] = {{1, 2, 3, 6},
                           {4, 5, 6, 3},
                           {7, 8, 9, 5},
                           {10, 11, 12, 14}};

    int r, c;
    int sum;
    for (r = 0; r < size; r++)
    {
        sum = 0;
        for (c = 0; c < size; c++)
        {
            //if ((r + c) == size - 1)
            {
                sum += arr[c][r];
                //printf("%d%d ", r, c);
            }
        }
        printf("Sum of %d is %d \n", c + 1, sum);
        //printf("\n");
    }
}