//Gcd of two numbers using recursion
#include<stdio.h>
int gcd(int a,int b){
    if(b==0)
    return a;
    else 
    return (gcd(b,b%a));


}

int main(){
    int a,b,c;
    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);
    c=gcd(a,b);
    printf("%d",(c));
    
    return 0;
}