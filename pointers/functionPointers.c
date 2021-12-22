#include <stdio.h>
#include <conio.h>

int sum(int x, int y)
{
    return (x + y);
}

int sub(int x, int y)
{
    return (x - y);
}

int mult(int x, int y)
{
    return (x * y);
}

int div(int x, int y)
{
    if (y != 0)
    {
        return x / y;
    }
    return 0;
}
void main()
{
    int x, y, choice, result;
    int (*op[4])(int, int);
    op[0] = sum;
    op[1] = sub;
    op[2] = mult;
    op[3] = div;

    printf("Enter x and y : ");
    scanf("%d%d", &x, &y);
    printf("Enter 0 for sum, 1 for sum, 2 for mult, 3 for div : ");
    scanf("%d", &choice);

    result = op[choice](x, y);
    printf("%d", result);
}
