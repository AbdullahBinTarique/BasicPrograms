/*Programme to sum 1St N natural no. using while loop.*/
#include<stdio.h>

int main(){
    int a=0, n, sum=0;
    printf("Enter The Value of N Till You want to Add.\n");
    scanf("%d", &n);
    while(a<=n){
        sum +=a;
        a++;        
    }
        printf("The Sum is %d\n",sum);
    return 0;
}