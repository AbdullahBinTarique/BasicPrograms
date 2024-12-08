/*programme for multiplication table for any given no. N*/

#include<stdio.h>

int main(){
    int n, tab, a=0, sum;
    printf("print any no.\n");
    scanf("%d",&n);
    printf("THE TABLE IS\n");
    for( a; a<=10; a++){
        tab=n*a;
        printf("%d\n", tab);
        sum +=n*a;
        
    }
        printf("The sum is %d\n", sum-16);

    return 0;
}