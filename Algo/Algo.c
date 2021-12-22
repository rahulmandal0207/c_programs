#include <stdio.h>

int linearSearch(int arr[], int size, int element)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == element)
            return i;
    }
    return -1;
}

int binarySearch(int arr[], int size, int element)
{
    int left = 0;
    int right = size - 1;
    int middle;
    while (right > left)
    {
        middle = (left + right) / 2;
        if (arr[middle] == element)
            return middle;
        else if (arr[middle] > element)
            right = middle - 1;
        else if (arr[middle] < element)
            left = middle + 1;
    }
    return -1;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selSort(int arr[], int size)
{
    int min;
    int i;
    int j;
    for (i = 0; i < size; i++)
    {
        min = i;
        for (j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(&arr[min], &arr[i]);
    }
}

void bubbleSort(int arr[], int size)
{
    int i;
    int j;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
        }
    }
}

void main()
{
    int arr[] = {3, 4, 13, 6, 7, 2, 67, 233, 43, 34, 12};
    //indicies = 0, 1, 2,  3, 4, 5, 6,  7,   8,  9,  10
    int size = sizeof(arr) / sizeof(arr[0]);

    int arr2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    //indicies =  0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    //printf("Element is found at index : %d", binarySearch(arr2, size2, -11));
    bubbleSort(arr, size);
    int i;
    printf("Sorted elements are : ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}