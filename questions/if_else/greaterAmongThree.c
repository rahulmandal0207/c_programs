// greatest among three

#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b, c;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);
    printf("Enter c : ");
    scanf("%d", &c);

    if (a == b)
    {
        if (a == c)
        {
            printf("All are equal");
        }
        else
        {
            if (a > c)
            {
                printf("a = %d and b = %d are equal and greater than c = %d", a, b, c);
            }
            else
            {
                printf("c = %d is greater", c);
            }
        }
    }
    else if (a == c)
    {
        if (a == b)
        {
            printf("All are equal");
        }
        else
        {
            if (a > b)
            {
                printf("a = %d and c = %d are equal and greater than b = %d", a, c, b);
            }
            else
            {
                printf("b = %d is greater ", b);
            }
        }
    }
    else if (b == c)
    {
        if (b == a)
        {
            printf("All are equal ");
        }
        else
        {
            if (b > a)
            {
                printf("b = %d and c = %d are equal and geater then a = %d", b, c, a);
            }
            else
            {
                printf("a = %d is greater", a);
            }
        }
    }
    else if (a > b)
    {
        if (a > c)
        {
            printf("a = %d is greatest \n", a);
        }
        else
        {
            printf("c = %d id greatest \n", c);
        }
    }
    else if (b > a)
    {
        if (b > c)
        {
            printf("b = %d is greatest \n", b);
        }
        else
        {
            printf("c = %d is greatest \n", c);
        }
    }

    getch();
}