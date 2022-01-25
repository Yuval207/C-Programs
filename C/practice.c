#include <stdio.h>


int main()
{
    int num ;
    int num2 ;
    int result ;
    char aloo ; 
    aloo = '!' ;
    

    printf("Enter a number : \n");
    scanf("%d" , &num );
    printf("Enter a second number : \n");
    scanf("%d" , &num2) ;

    result = num*num2 ;

    printf("The result is %d .  \n " , result);


}