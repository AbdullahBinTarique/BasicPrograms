//program for swapping of integers pointers
#include<stdio.h>
void swap();

int main(){
    int a=31,b=25;
    printf(" A and B before swapping %d ,%d  \n",a,b);
    swap(&a,&b);
    printf("A and B after swapping %d,%d \n",a,b);
    
    return 0;
}
void swap(int *c,int *d){
int temp;
temp=*c;
*c=*d;
*d=temp;
printf("A is %d , and B is %d\n",*c,*d);
return;
}