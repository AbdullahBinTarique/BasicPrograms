#include<stdio.h>
#include<conio.h>

int main(){
    int l,a,m,i,c;
    printf("enter the no of series u want\n");
    scanf("%d",&l);
    for(i=1;i<=l;i++)
    {c=1;
        for(a=1;a<=i;a++)
    {
        c=c*a;
       }
    
    printf("%f\n", i*1.0/c);}
    return 0;
    }
