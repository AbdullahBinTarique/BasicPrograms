//diamond pattern
#include<stdio.h>

int main(){
    int a,b,c;
    for (a=1;a<=4;a++)
    {
        for(int spc=1;spc<=5-a;spc++)
        printf(" ");
        for(b=2;b<=2*a;b++){
        printf("*");
        }
        printf("\n");
    }
    for (a=4;a>=1;a--)
     {
        for(int spc=5-a;spc>=0;spc--)
        printf(" ");
        for(b=3;b<=2*a-1;b++){
        printf("*");
        }
        printf("\n");
    }
    return 0;
}