#include <stdio.h>
#include <conio.h>

void main()
{
    char str1[50], str2[50];
    int i = 0, chk = 0;
    printf("Enter first string : ");
    gets(str1);
    printf("Enter second string : ");
    gets(str2);
    while (str1[i] != '\0' || str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            chk = 1;
            break;
        }
        i++;
    }
    if (chk == 0)
    {
        printf("Strings are equal");
    }
    else
    {
        printf("Strings are not equal");
    }

    getch();
}