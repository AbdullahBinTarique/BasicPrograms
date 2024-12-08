// first n natural numbers using recursion
#include<stdio.h>
int nat();

int main(){
    int a;
    printf("Enter values of series\n");
    scanf("%d",&a);
    nat(a);
    

    return 0;
}

int nat(int a){
    if(a==1){
        printf("%d\n",a);
    return (1);}
    else{
    printf("%d\n",a);
    return nat(a-1);
}}