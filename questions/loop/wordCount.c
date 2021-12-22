/* WAP in c to Enter a number and print it's in word. */

#include <stdio.h>
#include <conio.h>

void main()
{
    char string[100] = "This is just a test string";
    int i = 0;
    int word = 1;

    while (string[i] != '\0')
    {
        if (string[i] == ' ')
        {
            word++;
        }
        i++;
    }

    printf("Total words are : %d", word);
}