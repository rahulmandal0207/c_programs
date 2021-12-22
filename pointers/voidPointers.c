#include <stdio.h>
#include <conio.h>

void main()
{
    int x = 5;
    float y = 12.4;
    char z = 'r';

    void *ptr;

    ptr = &x;

    printf("The value of x is %d ", *(int *)ptr); 
    ptr = &y;
    printf("The value of x is %d ", *(float *)ptr);
    ptr = &z;
    printf("The value of x is %d ", *(char *)ptr);

}