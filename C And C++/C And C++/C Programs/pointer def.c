// find address of a pointer
#include<stdio.h>

int main(){
    int a;
    int *q=&a;
    printf("Enter a number\n");
    scanf("%d", &a);
    printf("the Address of variable is %u\n", &a);
    
    printf("the Address of variable is %u\n", q);
    
    printf("the value in variable is %d\n", a);
    printf("the value in variable is %d\n", *q);

    printf("the Address of 2nd variable is %u\n", &q);
    printf("the Address of 2nd variable is %u\n", &q);
    

    return 0;
}