#include <stdio.h>
#include <conio.h>

void printNumber(int *ptr)
{
    printf("%d \n", *ptr);
}

void printLetter(char *ptr)
{
    printf("%c \n", *ptr);
}

void print(void *ptr, char type) 
{
    switch (type)
    {
    case 'i':
        printf("%d \n", *(int *)ptr);
        break;
    case 'c':
        printf("%c \n", *(char *)ptr);
        break;
    }
}

int getMin(int number[])
{
    int size = sizeof(number) / sizeof(number[0]);
    int i, min = number[0];
    for (i = 1; i < size; i++)
    {
        if (number[i] < min)
        {
            min = number[i];
        }
    }
    return min;
}

int getMax(int number[])
{
    int size = sizeof(number) / sizeof(number[0]);
    int i, max = number[0];
    for (i = 1; i < size; i++)
    {
        if (number[i] > max)
        {
            max = number[i];
        }
    }
    return max;
}

void getMinAndMax(int number[], int *min, int *max)
{
    int size = sizeof(number) / sizeof(number[0]);
    int i;
    for (i = 1; i < size; i++)
    {
        if (number[i] < *min)
        {
            *min = number[i];
        }
        if (number[i] > *max)
        {
            *max = number[i];
        }
    }
}

void main()
{
    // int number = 7;
    // char letter = 'f';
    // print(&number,'i');
    // print(&letter,'c');

    int luckyNumber[5] = {22, -3, 55, 6, 47};
    // int i;
    // for (i = 0; i < 5; i++)
    // {
    //     printf("luckyNumber[%d] : ",i);
    //     scanf("%d", &luckyNumber[i]);
    // }
    // for (i = 0; i < 5; i++)
    // {
    //     printf("%d ", *(luckyNumber + i));
    // }

    // printf("%d \n", getMin(luckyNumber));
    // printf("%d \n", getMax(luckyNumber));
    int min = luckyNumber[0];
    int max = luckyNumber[0];
    getMinAndMax(luckyNumber, &min, &max);
    printf("%d \n", min);
    printf("%d \n", max);
}