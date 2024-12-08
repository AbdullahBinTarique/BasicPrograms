// Prime Numbers.
#include<stdio.h>

int main(){
    int num,a, b;
    printf("Enter The number\n");
    scanf("%d",&num);
    for(a=2;a<=num;a++){
    b=num%a;
    if(a!=num&&b==0){
        printf("The number is a composite No.\n");
        break;
    }
    else if(b==0&&a==num)
    {
    printf("The number is a prime No.\n");
        break;
    }}
    return 0;
}