// program to count digits in a no
#include <stdio.h>
#include <conio.h>

void main()
{
    int n, i = 0;
    printf("Enter a number : ");
    scanf("%d", &n); 
    while (n != 0)
    {
        n = n / 10; 
        i += 1;     
    }
    printf("%d", i);
    
    getch();
}
