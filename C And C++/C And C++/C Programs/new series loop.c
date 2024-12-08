#include<stdio.h>
int fact();

int main(){
    int a,b;
    float c;
    printf("enter values of ");
    scanf("%d",&b);
    a=fact(b);
    c=b*1.0/a;
    printf("%f",c);
    return 0;
}
//factorial


int fact(int l){
    int a=1,d=1;
    for(a=1;a<=l;a++)
    {d*=a;
    // printf("%d\n",d);
    }
    return (d);
}