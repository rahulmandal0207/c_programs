#include <stdio.h>
#include <conio.h>

void main()
{
    int num[5] = {1, 2, 3, 4, 5};
    int i, size, element, position;
    printf("Enter size of the array : ");
    scanf("%d", &size);
    printf("Enter element : ");
    scanf("%d", &element);
    printf("Enter position of element : ");
    scanf("%d", &position);

    for (i = size; i >= position; i--)
    {
        num[i] = num[i - 1];
    }
    num[position - 1] = element;
    size++;
    for (i = 0; i < size; i++)
    {
        printf("%d ", num[i]);
    }
}