//Array 2 used for making tables
#include<stdio.h>

int main(){
    int b=1,c;
    int s[10];
    printf("Enter any number to get its table\n");
    scanf("%d",&c);
   
    for (int a=1;a<=10;a++)
    {b=c*a;
    s[a-1]=b;}
    for (int a=1;a<=10;a++)
     {printf("The table of %d is %d\n", c,s[a-1]);}
    return 0;
}