/*
    Title: Mini Bank Management System

    DON'Ts:
    1. Do not use separate arrays for account details.
    2. Do not use global variables to store account data.
    3. Do not put the entire logic inside main().
    4. Do not allow withdrawal greater than the available balance.
    5. Do not use a hardcoded number of accounts.
    6. Do not create a separate structure for every account.
    7. Do not use file handling.
*/

#include <stdio.h>

struct account
{
    int accountno;
    char name[100];
    float amount;
};

void input(struct account arr[], int n);
void functions(struct account arr[], int n, int choice);

int main()
{
    int n, choice;

    printf("Enter number of accounts: ");
    scanf("%d", &n);

    struct account arr[n];

    input(arr, n);

    do
    {
        printf("\n\n===== BANK MANAGEMENT SYSTEM =====\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Display Account\n");
        printf("4. Search Account\n");
        printf("5. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice != 5)
            functions(arr, n, choice);

    } while (choice != 5);

    printf("\nThank you for using the Bank Management System.\n");
    return 0;
}

void input(struct account arr[], int n)
{
    int x, y;
    for (int i = 0; i < n; i++)
    {
        printf("\n\nEnter Details for Account %d\n", i + 1);
        do
        {
            x = 0;
            printf("Enter account number (12 digit): ");
            scanf("%d", &arr[i].accountno);
            y = arr[i].accountno;

            while (y != 0)
            {
                y /= 10;
                x++;
            }

            if (x != 12)
                printf("Invalid account number. Please enter a 12-digit number.\n");

        } while (x != 12);

        getchar();
        printf("Enter Name of account holder: ");
        fgets(arr[i].name, 100, stdin);
        printf("Initial amount: ");
        scanf("%f", &arr[i].amount);
    }
}

void functions(struct account arr[], int n, int choice)
{
    int a;
    int m = 0;
    int found;
    float k;

    if (choice == 1)
    {
        found = 0;
        printf("\nEnter account number: ");
        scanf("%d", &a);

        for (int i = 0; i < n; i++)
        {
            if (arr[i].accountno == a)
            {
                m = i;
                found = 1;
                break;
            }
        }

        if (found == 0)
        {
            printf("Account not found.\n");
            return;
        }

        printf("Enter the amount to deposit: ");
        scanf("%f", &k);
        if (k > 0)
        {
            arr[m].amount += k;
            printf("Amount deposited successfully.\n");
            printf("Updated balance: %.2f\n", arr[m].amount);
        }
        else
        {
            printf("Invalid amount.\n");
        }
    }

    else if (choice == 2)
    {
        found = 0;
        printf("\nEnter account number: ");
        scanf("%d", &a);

        for (int i = 0; i < n; i++)
        {
            if (arr[i].accountno == a)
            {
                m = i;
                found = 1;
                break;
            }
        }

        if (found == 0)
        {
            printf("Account not found.\n");
            return;
        }
        printf("Enter the amount to withdraw: ");
        scanf("%f", &k);

        if (k <= 0)
        {
            printf("Invalid amount.\n");
        }
        else if (k > arr[m].amount)
        {
            printf("Insufficient balance.\n");
        }
        else
        {
            arr[m].amount -= k;
            printf("Withdrawal successful.\n");
            printf("Updated balance: %.2f\n", arr[m].amount);
        }
    }

    else if (choice == 3)
    {
        found = 0;
        printf("\nEnter account number: ");
        scanf("%d", &a);
        for (int i = 0; i < n; i++)
        {
            if (arr[i].accountno == a)
            {
                m = i;
                found = 1;
                break;
            }
        }

        if (found == 0)
        {
            printf("Account not found.\n");
            return;
        }

        printf("\n******** Account Details ********\n");
        printf("Account Number: %d\n", arr[m].accountno);
        printf("Account Holder Name: ");
        puts(arr[m].name);
        printf("Amount: %.2f\n", arr[m].amount);
    }

    else if (choice == 4)
    {
        found = 0;
        printf("\nEnter account number to search: ");
        scanf("%d", &a);
        for (int i = 0; i < n; i++)
        {
            if (arr[i].accountno == a)
            {
                m = i;
                found = 1;
                break;
            }
        }

        if (found == 0)
        {
            printf("Account not found.\n");
            return;
        }

        printf("\nAccount Found!\n");
        printf("Account Number: %d\n", arr[m].accountno);
        printf("Account Holder Name: ");
        puts(arr[m].name);
        printf("Balance: %.2f\n", arr[m].amount);
    }

    else
    {
        printf("Invalid choice.\n");
    }
}
