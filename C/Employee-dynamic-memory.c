#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char Id;
    char *name;
    int no;
    int len;

    printf("Enter the number of employees = ");
    scanf("%d", &no);

    for (int i = 0; i < no; i++)
    {
        printf("Enter the length of character in ID = ");
        scanf("%d", &len);

        name = (char *)malloc((len + 1) * sizeof(char));

        printf("Enter the employee Id = ");
        scanf("%s", name);

        printf("\nThe ID of employee %d is = %s", i + 1, name);

        free(name);
    }

    return 0;
}