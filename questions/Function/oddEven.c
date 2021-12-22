#include <stdio.h>
#include <conio.h>

void isEven(int num)
{
    if (num % 2 == 0)
    {
        printf("%d is Even.", num);
    }
    else
    {
        printf("%d is Odd.", num);
    }
    
}

void main()
{
    int a;
    a =5;
    isEven(50);
}