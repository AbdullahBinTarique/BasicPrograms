//square of numbers using functions.
#include<stdio.h>
void power();

int main(){
    int a, pow;
    printf("Enter value of number to find square.\n ");
    power();
    printf("This is the given square of number\n");
    return 0;
}

void power(){ 
    int pow, a;
    scanf("%d", &a);
pow=a*a;
    printf("%d\n", pow);
}