/* Write a  C program to find the total number of notes in a given amount
Hint: types of notes are 1 rs, 2rs, 5rs,10rs ,50rs ,100 rs ,500 rs. */

#include <stdio.h>
#include <conio.h>

void main()
{
    int amount;
    int note500 = 0,
        note100 = 0,
        note50 = 0,
        note10 = 0,
        note5 = 0,
        note2 = 0,
        note1 = 0;

    printf("Enter amount : ");
    scanf("%d", &amount);

    if (amount >= 500)
    {
        note500 = amount / 500;
        amount = amount - (note500 * 500);
    }
    if (amount >= 100)
    {
        note100 = amount / 100;
        amount = amount - (note100 * 100);
    }
    if (amount >= 50)
    {
        note50 = amount / 50;
        amount = amount - (note50 * 50);+      
    }
    if (amount >= 10)
    {
        note10 = amount / 10;
        amount = amount - (note10 * 10);
    }
    if (amount >= 2)
    {
        note2 = amount / 2;
        amount = amount - (note2 * 2);
    }
    if (amount >= 1)
    {
        note1 = amount;
    }
 
    printf("Notes : \n");
    printf("Five hundred rupees note  = %d \n", note500);
    printf("One hundred rupees note = %d \n", note100);
    printf("Fifty rupees note = %d \n", note50);
    printf("Ten rupees note = %d \n", note10);
    printf("Two rupees note = %d \n", note2);
    printf("One rupee note = %d \n", note1);

    getch();
}