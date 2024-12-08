// diamond hole inverted
#include<stdio.h>

int main(){
    int a,b=8,c;
    for (a=1;a<=10;a++)
    {
        if (a<=5)
           for (c=1;c<=10;c++)
           {
            
            if (c<=(a)||c>=(11-a))
            printf("*");
            else
            printf(" ");
            }
        
        if (a>5)
        
            for (c=1;c<=10;c++)
           {
            
            if (c>=(a)||c<=(11-a))
            printf("*");
            else
            printf(" ");
            }
            printf("\n");
        
    }
    return 0;
}