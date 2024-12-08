/*Factorial*/
#include<stdio.h>

int main(){
    int fact=1, a=1, n;
    printf("Enter Values to find factorial.\n");
    scanf("%d", &n);
    do{
        fact *=a*1;
        a++;
        }
    while(a<=n);
    printf("Factorial = %d\n", fact);
    return 0;
}