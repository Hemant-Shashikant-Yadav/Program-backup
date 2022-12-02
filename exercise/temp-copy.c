#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char s[1000];
    gets(s);
    int i=0;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int num[10]={0};
    while (s[i]!='\0') {
        
        switch (s[i]) {
        case '0': num[0]++;break;
        case '1': num[1]++;break;
        case '2': num[2]++;break;
        case '3': num[3]++;break;
        case '4': num[4]++;break;
        case '5': num[5]++;break;
        case '6': num[6]++;break;
        case '7': num[7]++;break;
        case '8': num[8]++;break;
        case '9': num[9]++;break;
        default:break;
        }    
        i++;
    }   
    for(int j=0;j<10;j++)
    {
        printf("%d ",num[j]);
    }
    return 0;
}
