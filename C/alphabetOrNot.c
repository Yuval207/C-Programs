#include <stdio.h>

int main()
{
    char alpha;
    printf("Write an alphabet : " );
    scanf("%c" , &alpha);

    if ((alpha>='a' && alpha<='z') || (alpha>='A' && alpha<='Z'))
    {
        printf("%c is an alphabet." , alpha);
    }
    
    else
    {
        printf("%c is not an alphabet" , alpha);
    }
    
    

}