#include<stdio.h>


int main ()
{
      
    FILE *fp;
    char ch;
    
    fp = fopen("abc,txt","r");

    if (fp==NULL)
    {
        printf("File not found.");
        /* code */
        return ; 
    }
    
    printf("Data = \n");
    while (1)
    {
        ch= fgetc(fp);

        if (feof(fp))
        {
            break;
            /* code */
        }
        printf(" %c ",ch);
    }
    

    
      
    return 0; 
}