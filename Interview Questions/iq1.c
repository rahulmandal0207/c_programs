#include <stdio.h>
#include <conio.h> 

// print 1 to 100 without using any loop in the program

void printWithoutLoop(int num)
{
    if (num <= 100)
    {
        printf("%d \n", num);
        printWithoutLoop(num + 1);
    }

}

void main()
{
    printWithoutLoop(1);
    getch();
}