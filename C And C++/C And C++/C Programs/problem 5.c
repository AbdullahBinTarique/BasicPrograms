#include<stdio.h>

int main(){
    int n, prime=1;
    scanf("%d", &n);
   
    for(int i=2;i<n;i++){
        if (n%i==0){
            prime=0;
            break; }
    }
    if (prime==0){
        printf("this Is a not a Prime No.");
    }
    else{
        printf("This is a prime no.");
    }
    return 0;
}