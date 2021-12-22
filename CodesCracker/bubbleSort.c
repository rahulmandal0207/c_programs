#include <stdio.h>
#include <conio.h>

void main()
{
    int arr[50];
    int i, j, temp, n;
    printf("Enter total number of elements to sort : ");
    scanf("%d", &n);
    printf("Enter %d elements : ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < (n - 1); i++)
    {
        for (j = 0; j < (n-i-1); j++)
        {

            if (arr[j] > arr[j + 1] )
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    getch();
}