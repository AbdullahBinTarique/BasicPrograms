// recursive fibonacchi
#include<stdio.h>
int fib();

int main(){
    int a,n=1;
    fib(10);
    printf("%d\n", fib(10));

    return 0;
}

int fib(int n){
    if(n==1)
    return 0;
    else if(n==2)
    return 1;
    else 
    return fib(n-1) + fib(n-2) ;  

}