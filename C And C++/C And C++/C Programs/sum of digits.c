//sum of digits using recursion
#include<stdio.h>
int adi();

int main(){
   long int a;
  printf("Enter the digits\n");
    scanf("%ld",&a);
    adi(a);
    printf("%ld\n",adi(a));
    return 0;
}
int adi(long int a){
    int b;
    if(a!=0)
    b=a%10+adi(a/10);
    return b;

}