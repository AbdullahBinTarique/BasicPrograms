//natural logarithm
#include<stdio.h>
#include<math.h>

int main(){
    int   p;
    float n=0,q,x, r,t;
    printf("enter the terms till you want the series\n");
    scanf("%d", &p);
    fflush(stdin);
    printf("enter the value of x\n");
    scanf("%f", &x);
    q=(x-1)/(x);

    for(n=0;n<=p;n++){
        if(n==0)
       { r=q;
        printf("%f + ", r);}
        else if(n==1)
        continue;
        else
        {r=0.5*pow(q,n);
        printf("%f + ", r);}
    }

    return 0;
}