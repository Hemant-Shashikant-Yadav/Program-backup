#include <stdio.h>
int bal = 0;

int main()
{
    // char s[10] = "abcd";
    // int a;
    // int i = 0;
    // printf("%s\n", s);
    // // printf("%d",s);
    // while (s[i] != '\0')
    // {

    //     printf("%d\t", s[i]);
    //     i++;
    //     /* code */
    // }

    // FILE *ptr = NULL;
    // ptr = fopen("Tempfile.txt", "a");
    // fclose(ptr);
    const int b = 0;
    FILE *file1Ptr = NULL;
    int temp = 500;
    char s[100];
    int a = 0;
    int i = 0;
    char c;
    file1Ptr = fopen("tempfile.txt", "a");
    fclose(file1Ptr);

    // file1Ptr = fopen("tempfile.txt", "w");
    // fprintf(file1Ptr, "%d", b);
    // fclose(file1Ptr);
    file1Ptr = fopen("tempfile.txt", "r");
    c = fgetc(file1Ptr);
    fclose(file1Ptr);
    if (c != EOF)
    {

        file1Ptr = fopen("tempfile.txt", "r");
        // c = fgetc(file1Ptr);
        // printf("%s\n", s);
        // printf("%d", s);
        // if (c != EOF)
        // {
        //     printf("Entered in EOF");
        // fscanf(file1Ptr, "%s", s);
        fgets(s, 100, file1Ptr);

        while (s[i] != '\0')
        {
            printf("%c\n", s[i]);
            printf("%d", s[i]);
            a = (a * 10) + (s[i] - 48);
            // printf("%d\t", s[i]);
            // printf("%d\t", s[i]-48);
            i++;
            /* code */
            // }
        }
        // printf("\n%d", a);
        fclose(file1Ptr);
    }
    bal = a;

    printf("\nEnter the balence = ");
    scanf("%d", &temp);
    bal += temp;
    fprintf(file1Ptr, "\nYour balance is = %d\n", bal);

    file1Ptr = fopen("tempfile.txt", "w");
    fprintf(file1Ptr, "%d", bal);
    fclose(file1Ptr);
    return 0;
}