#include <stdio.h>
#include <conio.h>

void circle(float radius)
{
    printf("Diameter of the circle : %.1f \n", radius * 2);
    printf("Circumference of the circle : %.1f \n", 2 * 3.14 * radius);
    printf("Area of the circle : %.1f \n", 3.14 * radius * radius);
}

void main()
{
    circle(5);
}