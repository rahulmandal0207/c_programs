#include <stdio.h>
#include <conio.h>

#define size 10

void main()
{
    char bin[size];
    char ones[size];

    printf("Enter binary number : ");
    scanf("%s", bin);

    int i = 0;
    while (bin[i] != '\0')
    {
        if (bin[i] == '1')
        {
            ones[i] = '0';
        }
        else if (bin[i] == '0')
        {
            ones[i] = '1';
        }
        else
        {
            printf("Invalid input \n");
            break;
        }
        i++;
    }
    printf("Ones Compliment : %s", ones);
}