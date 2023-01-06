#include <stdio.h>
#include <stdlib.h>

int bal = 0;
FILE *fileptr = NULL;
void Add_money();
void Add_expence();
void View_balance();
void Last_expence();
void Reset_file();
int check_balance();

int main()
{
    int opt;

    // here an infinte running while loop is created.
    // This loop while terminate only when the termation condition (6.Exit) is given by user.
    while (1)
    {
        printf("\n\n");
        printf("---------------\n");
        printf("|| Hello !!! ||\n");
        printf("---------------------------------------\n");
        printf("| This is a money management project. |\n");
        printf("---------------------------------------\n");
        printf("| 1.Add money     |\n| 2.Add expence   |\n| 3.View balance  |\n| 4.Last expences |\n| 5.Reset file    |\n| 6.Exit.         | \n");
        printf("-------------------\n");
        printf("Choose option = ");
        scanf("%d", &opt);

        if (opt == 6)
        {
            break;
        }
        else
        {
            switch (opt)
            {
            case 1:
                Add_money();
                break;
            case 2:
                Add_expence();
                break;
            case 3:
                View_balance();
                break;
            case 4:
                Last_expence();
                break;
            case 5:
                Reset_file();
                break;

            default:
                printf("You enterd wring choice !!! Re-enter choice.");
                break;
            }
        }
    }
    return 0;
}

// This function add the money into your account.
void Add_money()
{
    system("cls");

    int temp;
    int temp_bal;

    // Apending mode create a new file if not present otherwise just opes file.
    // Here Append mode is used to create a file if it is not present.
    fileptr = fopen("file1.txt", "a");
    fclose(fileptr);

    // Here check balance function is used to check the balance amount present in file
    temp_bal = check_balance();
    // The value of money present in file is stored in global balance int variable
    bal = temp_bal;

    printf("\nEnter the balence = ");
    scanf("%d", &temp);
    bal += temp; // Here new entered amount is added in existing one
    fprintf(fileptr, "\nYour balance is = %d\n", bal);

    // We open this file in write mode to clear all present data in file and store new balace data
    fileptr = fopen("file1.txt", "w");
    fprintf(fileptr, "%d", bal);
    fclose(fileptr);
}

// This function add the expence and ammont of expence with date and time into a file log file.
void Add_expence()
{
    system("cls");

    int t;
    // This ask for how many times it should ask for expence
    printf("\nEnter number of times you want to add expences = ");
    scanf("%d", &t);

    while (t--)
    {

        char expance[100];
        char s2[100];
        int amt;
        char temp[100];
        int temp__bal = 0, i = 0;

        fileptr = fopen("file2.txt", "a");
        fclose(fileptr);

        // Old balance is retrived.
        temp__bal = check_balance();
        bal = temp__bal;

        getchar();
        printf("Enter expance name = ");
        gets(expance);
        printf("Enter expence ammount = ");
        scanf("%d", &amt);

    //Checking wheter the expence price is more than the money pressent.
        if (amt > bal)
        {
            printf("Expence price is more than balance\nExpence cannot be added !!!");
            return;
        }

    //Writing log int file with date and time.
        fileptr = fopen("file2.txt", "a");
        fgets(expance, 100, fileptr);
        fprintf(fileptr, "------------------------------------------------------------\n");
        fprintf(fileptr, "|%10s=|%10d Rs.|%15s|%15s|\n", expance, amt, __DATE__, __TIME__);
        fprintf(fileptr, "------------------------------------------------------------\n");
        fclose(fileptr);
        bal -= amt;

        fileptr = fopen("file1.txt", "w");
        fprintf(fileptr, "%d", bal);
        fclose(fileptr);

        fileptr = fopen("file1.txt", "r");
        fscanf(fileptr, "%s", temp);
        fclose(fileptr);

        printf("\nReamaining balance is = %s\n", temp);
    }
}
void View_balance()
{
    system("cls");
    fileptr = fopen("file1.txt", "r");

    char a[50];
    fscanf(fileptr, "%s", a);
    printf("\nYour balance is = %s\n", a);
}
void Last_expence()
{
    system("cls");
    char str[100];
    printf("Expences list = \n");
    printf("------------------------------------------------------------\n");
    printf("||      Name||       Price||          Date||          Time||\n");
    printf("------------------------------------------------------------\n");
    printf("------------------------------------------------------------\n");
    fileptr = fopen("file2.txt", "r");

    while (fgets(str, 100, fileptr) != NULL)
    {
        printf("%s", str);
    }
    fclose(fileptr);
}
void Reset_file()
{
    system("cls");
    int confirm;
    printf("You want to reset all expence history ?\n    1.Yes\n    2.no\nChoice = ");
    scanf("%d", &confirm);

    //Double verification for deleting all files.
    if (confirm == 1)
    {
        fileptr = fopen("file2.txt", "w");
        fclose(fileptr);
        printf("All history is been deleted !!!");
    }
}

int check_balance()
{
    char bal_string[100];
    int temp_bal = 0;
    int i = 0;
    char temp_char;
    // Here Read mode is used to scan the first character of the file.
    fileptr = fopen("file1.txt", "r");
    temp_char = fgetc(fileptr);
    fclose(fileptr);

    // Here that scanned character is compared with EOF(End of file)
    // if true then there is money already present.
    // if false then no money present and er adding it first time
    if (temp_char != EOF)
    {
        // We come in this loop only when money is present in file
        // We scan money in form of string
        fileptr = fopen("file1.txt", "r");
        fscanf(fileptr, "%s", bal_string);

        while (bal_string[i] != '\0')
        {
            // Here every digit of string is converted int corresponding integer value
            temp_bal = (temp_bal * 10) + (bal_string[i] - 48);
            i++;
        }

        fclose(fileptr);
    }
    return temp_bal;
}