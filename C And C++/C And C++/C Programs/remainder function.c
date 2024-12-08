//remainder functions
#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter values of dividend and divisor\n");
    scanf("%d %d", &a ,&b);
    c=a%b;
    if(a>b)
    printf("%d", c);
    else
    printf("your dividend is less than divisor hence remainder will be 0\n");
    return 0;
}