/*Programme to sum 1St 10 natural loop using while loop.*/
#include<stdio.h>

int main(){
    int a=0, n, sum=0;
    printf("Enter The Value of N Till You want to Add.\n");
    scanf("%d", &n);
    for(a;a<=n;a++){
        sum +=a;
    }
        printf("The Sum is %d\n",sum);
    return 0;
}