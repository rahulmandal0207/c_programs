#include <stdio.h>
#include <conio.h>

void main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int max_1, max_2;
    int i;
    max_1 = max_2 = arr[0];
    for (i = 0; i < 5; i++)
    {
        if (arr[i] > max_1)
        {
            max_2 = max_1;
            max_1 = arr[i];
        }
        else if (arr[i] > max_2 && arr[i] < max_1)
        {
            max_2 = arr[i];
        }
    }

    printf("%d ", max_2);
}