#include <stdio.h>
#include <conio.h>

void main()
{
    int celcius, fahrenheit;
    printf("Enter temperature in fahrenheit : ");
    scanf("%d", &fahrenheit);
    celcius = (fahrenheit - 32) * 5 / 9;
    printf("%d degree in celcius", celcius);
    getch();
}