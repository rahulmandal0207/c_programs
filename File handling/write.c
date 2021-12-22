#include <stdio.h>
#include <conio.h>

void main()
{
    FILE *fptr;
    fptr = fopen("File handling\\text.txt","w");
    
    if (fptr == NULL)
    {
        printf("Error ! \n");
    }

    getch();
}