//  run through main.c

int n, userPin = 1234, errorCounter;
double balance = 100, withdrawAmount, depositAmout;

void menu()
{
    printf("**********ATM MENU**********\n");
    printf("1: Show Balance \n");
    printf("2: Deposit \n");
    printf("3: Withdraw \n");
    printf("0: Exit \n");
    printf("************************");
    printf("\n");
}

void atm()
{
    do
    {
        printf("Enter your pin : ");
        scanf("%d", &n);
        if (n != userPin)
        {
            errorCounter++;
        }
    } while (errorCounter < 3 && n != userPin);
    
    if (errorCounter < 3)
    {
        do
        {
            menu();
            printf("\n");
            printf("Enter your choice : ");
            scanf("%d", &n);
            printf("\n");
            system("cls");
            switch (n)
            {
            case 0:
                printf("Exiting...");
                break;
            case 1:
                printf("\n");
                printf("Account Balance in Rupees : %lf \n", balance);
                printf("\n");
                break;
            case 2:
                printf("\n");
                printf("Enter deposit amount : ");
                scanf("%lf", &depositAmout);
                printf("\n");
                balance += depositAmout;
                printf("You deposited rupees %lf.\n", depositAmout);
                printf("Your current account balance is rupees %lf. \n", balance);
                printf("\n");
                break;
            case 3:
                printf("\n");
                printf("Enter withdraw amount : ");
                scanf("%lf", &withdrawAmount);
                printf("\n");
                if (withdrawAmount > balance)
                {
                    printf("\n");
                    printf("Not enough money \n");
                    printf("\n");
                }
                else
                {
                    balance -= withdrawAmount;
                    printf("You just withdrawl rupees %lf. \n", withdrawAmount);
                }
                printf("Your current account balance is rupees %lf\n", balance);
                printf("\n");
                break;

            default:
                printf("Invalid choice \n");
                break;
            }
        } while (n != 0);
    }
    else
    {
        printf("You have entered wrong pin 3 times.\n");
        printf("YOUR ACCOUNT HAS BEEN BLOCKED \n");
    }
    getch();
}
