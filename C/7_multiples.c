#include<stdio.h>
int main(void){
    int i , count = 50 , ans ;
    printf("The first 50 multiples of 7 are given below.");

    for ( i = 0; i < count; i++)
    {
        ans = 7*i;
        printf("%d \n" , ans);

    }
    

}