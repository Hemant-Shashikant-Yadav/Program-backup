#include <stdio.h>
#include <string.h>

int main()
{

    char str[50];
    char str2[50];
    char str3[50] = "Hello HY";

    // Printing string using printf scanf
    printf("Enter the string 1 = ");
    scanf("%s", &str);

    printf("Enter the string 2 = ");
    scanf("%s", &str2);

    printf("String 1 = %s\n", str);
    printf("String 2 = %s\n", str2);

    // Printing the length of string
    int l;
    l = strlen(str);

    printf("The length of string '%s' is = %d\n", str, l);
    
   
    // Upper case
    printf("String 3 = %s\n", str3);
    
    strupr(str3);
    printf("String 3 = %s\n", str3);

    // Lower case
    printf("String 3 = %s\n", str3);
    
    strlwr(str3);
    printf("String 3 = %s\n", str3);

    // copying string 1 into string 3
    printf("String 3 = %s\n", str3);
    printf("String 1 = %s\n", str);

    strcpy(str3, str); //(String you want to pest the new data , string you want to copy the data)
    printf("String 3 after copy is = %s\n", str3);


    //compering Two Strings
    printf("String 1 = %s\n", str);
    printf("String 2 = %s\n", str2);

    strcmp(str,str2);
    if (strcmp(str,str2)==0)
    {
        printf("Both Strings are Equal \n");   
    }
    else
    {
        printf("Both Strings are not Equal \n");
    }
    
     // Joining two strings
    printf("String 1 = %s\n", str);
    printf("String 2 = %s\n", str2);

    strcat(str, str2);    
    printf("String 1 after combining = %s\n", str);  // here we will use the first string used in concat eg,"str"
                                    //"str" will store data of combined string
    
    return 0;
}