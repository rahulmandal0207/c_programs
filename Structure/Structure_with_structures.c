#include <stdio.h>
#include <conio.h>

typedef struct
{
    int x;
    int y;
} point;

typedef struct
{
    float radius;
    point center;
} circle;

void main()
{
    circle c1 = {4.5, {3, 6}};
    printf("%3.1f %d %d", c1.radius, c1.center.x, c1.center.y);
    getch();

}