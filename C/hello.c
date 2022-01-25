#include <stdio.h>

int main()
{
    int i , n = 1 ; 

    printf("Enter a number:");
    scanf("%d" , &i);
    while (n > i){
        printf("Hello world\n");
        i++;
    }

}