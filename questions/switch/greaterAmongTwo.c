/*

Switch case statements are a substitute for long if statements that compare a variable to several integral values 
The switch statement is a multiway branch statement. 
It provides an easy way to dispatch execution to different parts of code based on the value of the expression.
Switch is a control statement that allows a value to change control of execution.

*/

#include <stdio.h>

int main()
{
    int n1, n2;
    printf("Enter first number : ");
    scanf("%d", &n1);
    printf("Enter second number : ");
    scanf("%d", &n2);
    
    switch (n1 > n2)
    {
    case 0:
        printf("%d is greater \n", n2);
        break;
    case 1:
        printf("%d is greater \n", n1);
        break;

    }
    return 0;

}