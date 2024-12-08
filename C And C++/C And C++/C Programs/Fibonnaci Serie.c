#include<stdio.h>

int main(){
    int sum, st=1, nd=3, n, tn;
    printf(" Enter The no. of terms till you want to find sum.\n");
    scanf("%d", &n);
    while(tn <=n ){
        sum= st+nd;
        printf("The Series is %d \n", sum);
        nd= sum;
        st=sum -st;
        tn++;
    }
    return 0;
}