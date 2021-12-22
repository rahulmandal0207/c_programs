#include <stdio.h>
#include <conio.h>

void main()
{
    int deciNum, binNum[50], i = 0;
    printf("Enter Decimal number : ");
    scanf("%d", &deciNum);
    while (deciNum != 0)
    {
        binNum[i] = deciNum % 2;
        i++;
        deciNum = deciNum / 2; 
    }
    for (i = (i - 1); i >= 0; i--)
    {
        printf("%d", binNum[i]);
    }
    getch();
}