#include<stdio.h>
int main()
{
    //This code about Bank Account Balance
    //First 4 options is 1. Add Balance 2. Show 3. Withdraw 4. Exit
    //After it has ask 4 out of any one question 
    //If we have enter 1st choice then show balance in massage
    //Again ask 4 option and ask withdrow amount if we have enter 3rd choice then show balance after withdraw
    //Again ask 4 option and if we have enter 4th choice then exit the program
    int balance = 0;
    int choice;
    while(1)
    {
        printf("1. Add Balance\n");
        printf("2. Show Balance\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice)
        {
            case 1:
                int addAmount;
                printf("Enter amount to add: ");
                scanf("%d", &addAmount);
                balance += addAmount;
                printf("Balance added successfully!\n");
                break;
            case 2:
                printf("Current Balance: %d\n", balance);
                break;
            case 3:
                int withdrawAmount;
                printf("Enter amount to withdraw: ");
                scanf("%d", &withdrawAmount);
                if(withdrawAmount > balance)
                {
                    printf("Insufficient balance!\n");
                }
                else
                {
                    balance -= withdrawAmount;
                    printf("Withdrawal successful! Current Balance: %d\n", balance);
                }
                break;
            case 4:
                printf("Exiting the program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}