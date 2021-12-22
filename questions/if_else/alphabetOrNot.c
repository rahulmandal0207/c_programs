#include <stdio.h>
#include <conio.h>

void main()
{
    char ch;
    printf("Enter a character : ");
    scanf("%s", &ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("%c is an alphabet \n", ch);
    }
    else
    {
        printf("%c is not an alphabet \n", ch);
    }
    getch();
}