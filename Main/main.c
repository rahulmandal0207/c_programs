#include <stdio.h>
#include <conio.h>

//#include "ATM.c"
//#include "matrix.c"

int n3 = 0, n1 = 0, n2 = 0, h = 0;
char ch;
// float f1, f2;

struct student
{
    int roll;
    char name[30];
} s1;
// HCF
int hcf(n1, n2)
{
    for (n3 = 1; n3 <= n1 && n3 <= n2; n3++)
    {
        if (n1 % n3 == 0 && n2 % n3 == 0)
        {
            h = n3;
        }
    }
    return h;
}

// star pattern 1
void star1(n3)
{
    for (n1 = 1; n1 <= n3; n1++)
    {
        for (n2 = 1; n2 <= n1; n2++)
        {
            printf("*");
        }
        printf("\n");
    }
}
// star pattern 2
void star2(n3)
{
    for (n1 = 1; n1 <= n3; n1++)
    {
        for (n2 = n3; n2 >= n1; n2--)
        {
            printf("*");
        }
        printf("\n");
    }
}
// star pattern 3
void star3(n3)
{
    for (n1 = 1; n1 <= n3; n1++)
    {
        for (h = 1; h < n1; h++)
        {
            printf(" ");
        }
        for (n2 = n3; n2 >= n1; n2--)
        {
            printf("*");
        }
        printf("\n");
    }
}
// star pattern 4
void star4(n3)
{
    for (n1 = 1; n1 <= n3; n1++)
    {
        for (h = 1; h < n1; h++)
        {
            printf(" ");
        }
        for (n2 = (2 * n3 - 1); n2 >= (2 * n1 - 1); n2--)
        {
            printf("*");
        }
        printf("\n");
    }
}
// star pattern 5
void star5(n3)
{
    for (n1 = 1; n1 <= n3; n1++)
    {
        for (h = n3; h > n1; h--)
        {
            printf(" ");
        }
        for (n2 = 1; n2 <= n1; n2++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
// star pattern 6
void star6(n3)
{
    for (n1 = 1; n1 <= n3; n1++)
    {
        for (h = 1; h < n1; h++)
        {
            printf(" ");
        }
        for (n2 = n3; n2 >= n1; n2--)
        {
            printf("* ");
        }
        printf("\n");
    }
}
// star pattern 7
void star7(n3)
{
    for (n1 = 1; n1 <= n3; n1++)
    {

        for (n2 = 1; n2 <= n3; n2++)
        {
            if (n1 + n2 <= n3)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
}
// number pattern 1
void num1(n3)
{
    for (n1 = 1; n1 <= n3; n1++)
    {
        for (n2 = 1; n2 <= n1; n2++)
        {
            printf("%d", n1);
        }
        printf("\n");
    }
}
// number pattern 2
void num3(n3)
{
    int h = 1;
    for (n1 = 1; n1 <= n3; n1++)
    {
        for (n2 = 1; n2 <= n1; n2++)
        {
            printf("%d", h);
            h++;
        }
        printf("\n");
    }
}
// number pattern 3
void num4(n3)
{
    for (n1 = 1; n1 <= n3; n1++)
    {
        for (n2 = n3; n2 >= n1; n2--)
        {
            printf("%d ", n1);
        }
        printf("\n");
    }
}
// number pattern 4
void num5(n3)
{
    for (n1 = n3; n1 >= 1; n1--)
    {
        for (n2 = 1; n2 <= n1; n2++)
        {
            printf("%d", n2);
        }
        printf("\n");
    }
}
// heart pattern
void heartPtrn()
{
    for (n1 = 1; n1 < 5; n1++)
    {
        for (h = 5; h > n1; h--)
        {
            printf(" ");
        }
        for (n2 = 1; n2 <= n1 + 4; n2++)
        {
            printf("* ");
        }
        for (h = 4; h > n1; h--)
        {
            printf("  ");
        }
        for (n2 = 1; n2 <= n1 + 4; n2++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (n1 = 1; n1 <= 16; n1++)
    {
        for (h = 1; h <= n1; h++)
        {
            printf(" ");
        }
        for (n2 = 16; n2 >= n1; n2--)
        {
            printf("* ");
        }
        printf("\n");
    }
}
// swap the value of two variables

void swap(n1, n2)
{
    printf("%d - %d \n", n1, n2);
    n3 = n1;
    n1 = n2;
    n2 = n3;
    printf("%d - %d \n", n1, n2);
}
// factorial of a number
int fact(n3)
{
    if (n3 == 0)
    {
        return 1;
    }
    else
    {
        return (n3 * fact(n3 - 1));
    }
}
// check a letter is vowel or consonant
void vowelOrConsonent(ch)
{
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("%c is vowel", ch);
    }
    else if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("%c is vowel", ch);
    }
    else
    {
        printf("%c is consonant", ch);
    }
}
//  fibonacci series
void fibo(n3)
{
    n1 = 0;
    n2 = 1;
    h;
    while (n2 < n3)
    {
        h = n1 + n2;
        printf("%d \t", n2);
        n1 = n2;
        n2 = h;
    }
}
// maximum between two numbers
int max2(n1, n2)
{
    if (n1 > n2)
    {
        return n1;
    }
    return n2;
}
// maximum between three numbers
void max3(n1, n2, n3)
{
    if (n1 == n2 && n2 == n3)
    {
        printf("All are equal.");
    }
    else if (n1 > n2)
    {
        if (n1 > n3)
        {
            printf("First is greater", n1);
        }
        else if (n1 == n3)
        {
            printf("First and Third are equal and greater than Second");
        }
        else
        {
            printf("Third is greater");
        }
    }
    else if (n2 > n1)
    {
        if (n2 > n3)
        {
            printf("Second is greater");
        }
        else if (n2 == n3)
        {
            printf("Second and Third are equal and greater than First");
        }
        else
        {
            printf("Third is greater");
        }
    }
    else if (n3 > n1)
    {
        if (n3 > n2)
        {
            printf("Third is greater", n3);
        }
        else if (n3 == n2)
        {
            printf("Third and Second are equal and greater than First");
        }
        else
        {
            printf("Second is greater", n2);
        }
    }
    else if (n1 > n3)
    {
        if (n1 > n2)
        {
            printf("First is greater");
        }
        else if (n1 == n2)
        {
            printf("First and Second are equal and greater than Third");
        }
        else
        {
            printf("Second is greater");
        }
    }
}

void alphaOrNot(ch)
{
    if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
    {
        printf("%c is a alphabet character", ch);
    }
    else
    {
        printf("%c is not a alphabet character", ch);
    }
}

void mainMenu()
{
    printf("\n\n");
    printf("**********OPTIONS********** \n");
    printf("1: Arithmetic operations \n");
    printf("2: Table of a number \n");
    printf("3: Structure \n");
    printf("4: Co-prime or not \n");
    printf("5: HCF and LCM \n");
    printf("6: Patterns \n");
    printf("7: Reverse a number \n");
    printf("8: Swap two numbers \n");
    printf("9: Factorial of a number \n");
    printf("10: Vowel or consonant \n");
    printf("11: Find ASCII value of a character \n");
    printf("12: ATM application \n");
    printf("13: Sum of two matrix \n");
    printf("14: Fibonacci series \n");
    printf("15: Max between two numbers \n");
    printf("16: Max between three numbers \n");
    printf("17: A character is alphabet or not \n");
    printf("0: Exit \n");
    printf("*************************** \n");
    printf("\n\n");
}

void main()
{
    do
    {
        mainMenu();
        printf("Enter your choice : ");
        scanf("%d", &n3);
        system("cls");
        switch (n3)
        {
        case 0:
            printf("Exiting...");
            break;
        case 1:
            printf("1: Sum of two numbers \n");
            printf("2: Sub of two numbers \n");
            printf("3: Mul of two numbers \n");
            printf("4: Div of two numbers \n");
            printf("\n");
            printf("Enter your choice : ");
            scanf("%d", &n3);
            printf("Enter first number : ");
            scanf("%d", &n1);
            printf("Enter second number : ");
            scanf("%d", &n2);

            switch (n3)
            {
            case 1:
                printf("Sum is %d \n", n1 + n2);
                break;

            case 2:
                printf("Difference is %d \n", n1 - n2);
                break;

            case 3:
                printf("Product is %d \n", n1 * n2);
                break;

            case 4:
                if (n2 != 0)
                {
                    printf("Quotient is %d \n", n1 / n2);
                    printf("Remainder is %d \n", n1 % n2);
                    break;
                }

            default:
                printf("Invalid choice \n");
            }
            break;
        case 2:
            printf("Enter a number : ");
            scanf("%d", &n1);
            printf("Up to x(Times) : ");
            scanf("%d", &n2);
            for (n3 = 1; n3 <= n2; n3++)
            {
                printf("%d x %d = %d \n", n1, n3, n1 * n3);
            }
            break;

        case 3:
            printf("Enter roll number : ");
            scanf("%d", &s1.roll);
            printf("Enter name : ");
            scanf("%s", &s1.name);
            printf("Student's roll number is %d and his/her name is %s \n", s1.roll, s1.name);
            break;

        case 4:
            printf("Enter two numbers : ");
            scanf("%d%d", &n1, &n2);
            hcf(n1, n2);
            if (h == 1)
            {
                printf("%d and %d are co-prime numbers", n1, n2);
            }
            else
            {
                printf("%d and %d are not co-prime numbers", n1, n2);
            }
            break;

        case 5:
            printf("Enter two numbers : ");
            scanf("%d%d", &n1, &n2);
            hcf(n1, n2);
            printf("HCF of %d and %d is %d \n", n1, n2, h);
            printf("LCM of %d and %d is %d \n", n1, n2, (n1 * n2 / h));
            break;

        case 6:
            printf("\n");
            printf("1: star pattern 1 \n");
            printf("2: star pattern 2 \n");
            printf("3: star pattern 3 \n");
            printf("4: star pattern 4 \n");
            printf("5: star pattern 5 \n");
            printf("6: star pattern 6 \n");
            printf("7: Number pattern 1 \n");
            printf("8: Number pattern 2 \n");
            printf("9: Number pattern 3 \n");
            printf("10: Number pattern 4 \n");
            printf("11: Star pattern 7 \n");
            printf("12: Heart pattern \n");
            printf("\n");
            printf("Enter pattern number : ");
            scanf("%d", &n3);
            switch (n3)
            {
            case 1:
                printf("Enter num of rows : ");
                scanf("%d", &n1);
                star1(n1);
                break;
            case 2:
                printf("Enter num of rows : ");
                scanf("%d", &n1);
                star2(n1);
                break;
            case 3:
                printf("Enter num of rows : ");
                scanf("%d", &n1);
                star3(n1);
                break;
            case 4:
                printf("Enter num of rows : ");
                scanf("%d", &n1);
                star4(n1);
                break;
            case 5:
                printf("Enter num of rows : ");
                scanf("%d", &n1);
                star5(n1);
                break;
            case 6:
                printf("Enter num of rows : ");
                scanf("%d", &n1);
                star6(n1);
                break;
            case 7:
                printf("Enter num of rows : ");
                scanf("%d", &n1);
                num1(n1);
                break;
            case 8:
                printf("Enter num of rows : ");
                scanf("%d", &n1);
                num3(n1);
                break;
            case 9:
                printf("Enter num of rows : ");
                scanf("%d", &n1);
                num4(n1);
                break;
            case 10:
                printf("Enter num of rows : ");
                scanf("%d", &n1);
                num5(n1);
                break;
            case 11:
                printf("Enter num of rows : ");
                scanf("%d", &n1);
                star7(n1);
                break;
            case 12:
                heartPtrn();
                break;

            default:
                printf("Invalid choice");
                break;
            }
            break;

        case 7:
            printf("Enter a number : ");
            scanf("%d", &n3);
            while (n3 != 0)
            {
                n2 = n3 % 10;
                n1 = n1 * 10 + n2;
                n3 /= 10;
            }
            printf("Reversed  number is = %d", n1);
            break;
        case 8:
            printf("Enter first number : ");
            scanf("%d", &n1);
            printf("Enter second number : ");
            scanf("%d", &n2);
            swap(n1, n2);
            break;
        case 9:
            printf("Enter a number : ");
            scanf("%d", &n3);
            printf("Factorial of %d is %d", n3, fact(n3));
            break;
        case 10:
            printf("Enter a ch : ");
            scanf("%s", &ch);
            vowelOrConsonent(ch);
            break;
        case 11:
            printf("Enter a letter : ");
            scanf("%s", &ch);
            printf("ASCII value of %c is %d \n", ch, ch);
            break;
        /*case 12:
            atm(); // from ATM.c
            break;
        case 13:
            mat(); // from matrix.c
            break;*/
        case 14:
            printf("Fibo up to : ");
            scanf("%d", &n3);
            fibo(n3);
            break;

        case 15:
            printf("Enter first number : ");
            scanf("%d", &n1);
            printf("Enter second number : ");
            scanf("%d", &n2);
            printf("%d is maximum", max2(n1, n2));
            break;

        case 16:
            printf("Enter first number : ");
            scanf("%d", &n1);
            printf("Enter second number : ");
            scanf("%d", &n2);
            printf("Enter third number : ");
            scanf("%d", &n3);
            max3(n1, n2, n3);
            break;

        case 17:

            printf("Enter a character : ");
            scanf("%s", &ch);
            alphaOrNot(ch);
            break;

        default:
            printf("Invalid choice ");
            break;
        }
    } while (n3 != 0);
}