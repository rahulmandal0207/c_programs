/* WAP in c to reverse the order of string. */

#include <stdio.h>
#include <string.h>

#define size 100

void main()
{
    char str[size] = "This is a string";
    char rev[size];

    int i, j, wordStart, wordEnd;
    j = 0;

    wordStart = strlen(str) - 1;
    wordEnd = strlen(str) - 1;
    
    while (wordStart > 0)
    {
        if (str[wordStart] == ' ')
        {
            i = wordStart + 1;
            while (i <= wordEnd)
            {
                rev[j] = str[i];
                i++;
                j++;
            }
            rev[j++] = ' ';
            wordEnd = wordStart - 1;
        }
        wordStart--;
    }

    for (i = 0; i <= wordEnd; i++)
    {
        rev[j] = str[i];
        j++;
    }

    rev[j] = '\0';
    
    printf("%s", rev);
    getch();
}