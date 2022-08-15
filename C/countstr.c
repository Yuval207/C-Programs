#include<stdio.h>
#include<string.h>

void main(){
    int n, alp, digits, splchar;  
    char str[n];
    printf("My nama is Yuval\n");
    printf("Enter the length of the string:");
    scanf("%d",&n);
    printf("Enter the the string:");
    scanf("%s",&str);
    
    for (int i = 0; i < strlen(str); i++)
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            alp++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            digits++;
        }
        else
        {
            splchar++;
        }
    }
    printf("Number of Alphabets in the string is : %d\n", alp);
    printf("Number of Digits in the string is : %d\n", digits);
    printf("Number of Special characters in the string is : %d\n\n", splchar);
    
}