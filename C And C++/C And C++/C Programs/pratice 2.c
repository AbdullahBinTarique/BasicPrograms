/*programme for multiplication table for any given no. N In Reverse order*/

#include<stdio.h>

int main(){
    int n, tab, a=10;
    printf("Print any no.\n");
    scanf("%d",&n);
    printf("THE TABLE IS\n");
    while(a!=0){
        tab=n*a;
        printf("%d\n", tab);
        a--;
    }

    return 0;
}