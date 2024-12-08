//pointers used as factorial
#include<stdio.h>
void fact();

int main(){
    int a;
    printf("Enter the values to find its factorial.\n");
    scanf("%d",&a);
    fact(&a);
    printf("The value of factorial is %d\n",a);


    return 0;
}
void fact(int *b){
    int a=1,c=1;
    for (a=1;a<=*b;a++)
    {
    c*=a;
    printf("%d\n",c);}
    *b=c;


}