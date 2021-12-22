#include <stdio.h>
#include <conio.h>

void input(int *arr, int size)
{
    int *endArr = arr + (size - 1);
    printf("Enter elements of array : ");
    while (arr <= *endArr)
    {
        scanf("%d", *arr);
        arr++;
    }
}

void main()
{
    int arr[50];
    input(arr, 5);
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}