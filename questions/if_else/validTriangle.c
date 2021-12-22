#include <stdio.h>

int main()
{
    int a1, a2, a3;
    printf("Enter three angles of triangle : ");
    scanf("%d%d%d", &a1, &a2, &a3);
    if ((a1 + a2 + a3) == 180)
    {
        if (a1 > 0 && a2 > 0 && a3 > 0)
        {
            printf("valid");
        }
        else
        {
            printf("Invalid");
        }
    }
    else
    {
        printf("Invalid");
    }
    getch();
    return 0;
}