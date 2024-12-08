/*For Prime no. identification*/
#include<stdio.h>

int main(){
    int a , c, b=2, prime=1;
    printf("Enter any no. to check whether it is prime or not.\n");
    scanf("%d", &a);
    while(b<a){
c=a%b;
        b++;
        printf("%d\n", c);
    if(c==0){
        printf("hi =%d\n", c);
        prime=0;
    break;}
    }
    
    if(prime==0){
        printf("The Entered no. is not a prime no.\n");}
    else{
        printf("The Entered no. is a prime no.\n");
    }
    return 0;
    }

