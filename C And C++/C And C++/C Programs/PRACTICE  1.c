/*programme for multiplication table for any given no. N*/

#include<stdio.h>

int main(){
    int n, tab, a=1;
    printf("print any no.\n");
    scanf("%d",&n);
    printf("THE TABLE IS\n");
    while(a<=10){
        tab=n*a;
        printf("%d\n", tab);
        a++;
    }

    return 0;
}