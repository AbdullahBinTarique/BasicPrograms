//recursive fibonacchi
#include<stdio.h>
int fibo();

int main(){
    int a,r=5;
    fibo(r);
    printf("%d\n", fibo(r));


    return 0;
}

int fibo(int a){
    int p;
    if(a==0||a==1)
    a=1;
    else
    return a * fibo(a-1);

    }
