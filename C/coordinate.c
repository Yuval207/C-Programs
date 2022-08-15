#include <stdio.h>
int main(){
    int x,y;
    printf("My name is Yuval\n");
    printf("Enter the value of X and Y coordinate of the point:\n");
    scanf("%d%d",&x,&y);
    if(x>0 && y>0){
        printf("The point lies in First Quadrant");
    }
    else if(x<0 && y>0){
        printf("The point lies in Second Quadrant");
    }
    else if(x>0 && y<0){
        printf("The point lies in Third Quadrant");
    }
    else{
        printf("The point lies in Fourth Quadrant");
    }
    return 0;
}