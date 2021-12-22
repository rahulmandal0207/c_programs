#include <stdio.h>
#include <conio.h>

void main()
{
    int celcius, fahrenheit;
    printf("Enter temperature in Celcius : ");
    scanf("%d", &celcius);
    fahrenheit = (celcius * 9 / 5) + 32;
    printf("%d degree in Fahrenheit", fahrenheit);
    getch();
}