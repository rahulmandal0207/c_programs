#include <stdio.h>
#include <conio.h>

void main()
{
    int arr[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 45};

    int size = sizeof(arr) / sizeof(arr[0]);
    int left = 0, right = size, middle, data;

    printf("Enter number to be searched : ");
    scanf("%d", &data);

    while (left <= right)
    {
        middle = (left + right) / 2;
        if (data == arr[middle])
        {
            printf("The number %d is found at position %d", data, middle + 1);
            break;
        }
        else if (data < arr[middle])
        {
            right = middle - 1;
        }
        else
        {
            left = middle + 1;
        }
    }
    if (left > right)
    {
        printf("The number %d is not found in the array", data);
    }

    getch();
}