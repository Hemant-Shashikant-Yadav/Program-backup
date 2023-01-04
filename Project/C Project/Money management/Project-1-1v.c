#include <stdio.h>
#include <stdlib.h>

FILE *file1Ptr = NULL;
void Add_money();
void Add_expence();
void View_balance();
void Last_expence();
void Reset_file();
int bal = 0;

int main()
{
    int opt;

    while (1)
    {

        printf("\n\nHello !!!\n1.Add money\n2.Add expence\n3.View balance\n4.Last expences\n5.Reset file\n6.Exit.\nChoose option = ");
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
void Add_money()
{
    system("cls");
    int temp = 500;
    char s[100];
    int a = 0;
    int i = 0;
    char c;
    // 1.
    // file1Ptr = fopen("file1.txt", "r");
    // c = fgetc(file1Ptr);
    // if ('c' == EOF)
    // {
    //     fclose(file1Ptr);
    //     file1Ptr = fopen("file1.txt", "w");
    //     fprintf(file1Ptr, "\nYour balance is = %d\n", bal);
    //     /* code */
    // }
    // fclose(file1Ptr);

    // 2.
    // int i = 0;
    // char ch;
    // file1Ptr = fopen("file1.txt", "r");
    // ch = fgetc(file1Ptr);
    // if (ch != EOF)
    // {
    //     fgets(s, 100, file1Ptr);
    //     while (s[i] != '\0')
    //     {
    //         a = a * 10 + s[i] - 48;
    //         i++;
    //     }

    // fscanf(file1Ptr, "%d", a);
    // bal = a;

    // }
    // fclose(file1Ptr);
    // bal = a;
    // // 3.
    // file1Ptr = fopen("file1.txt", "w");

    // printf("Enter the balence = ");
    // scanf("%d", &temp);
    // bal += temp;

    // // fprintf(file1Ptr, "Your balance is = %d\n", bal);
    // fprintf(file1Ptr, "%d", bal);
    // fclose(file1Ptr);

    // 3
    // file1Ptr = fopen("file1.txt", "w");
    // fprintf(file1Ptr, "%d", temp);
    // fclose(file1Ptr);
    file1Ptr = fopen("file1.txt", "a");
    fclose(file1Ptr);

    file1Ptr = fopen("file1.txt", "r");
    c = fgetc(file1Ptr);
    fclose(file1Ptr);
    if (c != EOF)
    {
        printf("Entered in EOF.");
        file1Ptr = fopen("file1.txt", "r");
        fscanf(file1Ptr, "%s", s);
        // printf("%s\n", s);
        // printf("%d", s);
        while (s[i] != '\0')
        {
            a = (a * 10) + (s[i] - 48);
            // printf("%d\t", s[i]);
            // printf("%d\t", s[i]-48);
            i++;
            /* code */
        }
        // printf("\n%d", a);
        fclose(file1Ptr);
    }
    bal = a;

    printf("\nEnter the balence = ");
    scanf("%d", &temp);
    bal += temp;
    fprintf(file1Ptr, "\nYour balance is = %d\n", bal);

    file1Ptr = fopen("file1.txt", "w");
    fprintf(file1Ptr, "%d", bal);
    fclose(file1Ptr);
}
void Add_expence()
{
    system("cls");
    int t;
    printf("\nEnter number of times you want to add expences = ");
    scanf("%d", &t);
    while (t--)
    {

        char s1[100];
        char s2[100];
        int amt;
        char c[100];
        int a1 = 0, i = 0;

        file1Ptr = fopen("file2.txt", "a");
        fclose(file1Ptr);
        file1Ptr = fopen("file1.txt", "r");
        fscanf(file1Ptr, "%s", s2);
        fclose(file1Ptr);
        // printf("%s\n", s);
        // printf("%d", s);
        while (s2[i] != '\0')
        {
            a1 = (a1 * 10) + (s2[i] - 48);
            // printf("%d\t", s[i]);
            // printf("%d\t", s[i]-48);
            i++;
            /* code */
        }
        // printf("\n%d", a1);

        bal = a1;

        getchar();
        printf("Enter expance name = ");
        gets(s1);
        printf("Enter expence ammount = ");
        scanf("%d", &amt);

        if (amt > bal)
        {
            printf("Expence price is more than balance\nExpence cannot be added !!!");
            return;
            /* code */
        }

        file1Ptr = fopen("file2.txt", "a");
        fgets(s1, 100, file1Ptr);
        fprintf(file1Ptr, "%s = %d    %s    %s\n", s1, amt, __DATE__, __TIME__);
        fclose(file1Ptr);

        bal -= amt;

        file1Ptr = fopen("file1.txt", "w");
        fprintf(file1Ptr, "%d", bal);
        fclose(file1Ptr);

        file1Ptr = fopen("file1.txt", "r");
        fscanf(file1Ptr, "%s", c);
        fclose(file1Ptr);

        printf("\nReamaining balance is = %s", c);
    }
}
void View_balance()
{
    system("cls");
    file1Ptr = fopen("file1.txt", "r");
    // char s[100];
    // fgets(s, 100, file1Ptr);
    // printf("%s\n", s);

    char a[50];
    fscanf(file1Ptr, "%s", a);
    printf("\nYour balance is = %s\n", a);
}
void Last_expence()
{
    system("cls");
    char str[100];
    printf("Expences list = \n");
    file1Ptr = fopen("file2.txt", "r");

    while (fgets(str, 100, file1Ptr) != NULL)
    {
        printf("%s", str);
    }
    fclose(file1Ptr);
}
void Reset_file()
{
    system("cls");
    int confirm;
    printf("You want to reset all expence history ?\n    1.Yes\n    2.no\nChoice = ");
    scanf("%d", &confirm);

    if (confirm == 1)
    {
        file1Ptr = fopen("file2.txt", "w");
        fclose(file1Ptr);
        printf("All history is been deleted !!!");
    }
}