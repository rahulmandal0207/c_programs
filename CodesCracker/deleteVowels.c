#include <stdio.h>
#include <conio.h>

void main()
{
    char word[] = "c_programming_language";
    int i;
    int size = sizeof(word) / sizeof(word[0]);
    for (i = 0; i < size; i++)
    {
        if (word[i] == 'a' || word[i] == 'e' || 
            word[i] == 'i' || word[i] == 'o' ||
            word[i] == 'u' || word[i] == 'A' ||
            word[i] == 'E' || word[i] == 'I' ||
            word[i] == 'O' || word[i] == 'U')
        {
            continue;
        }
        else
        {
            printf("%c", word[i]);
        }
    }
    getch();
}