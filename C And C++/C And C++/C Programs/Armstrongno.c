//Armstrong number.
#include<stdio.h>


int main(){
    int  a, b, c, num,d,p,q;
    for (num=1;num<=500;num++)

   // printf("Enter the number till you want\n");
   // scanf("%d",&num);
   if(num<=10)
   {
    p=num*num*num;
    if(p==num)
    printf("%d\n",p);}
    else
    {a=num/100;
    b=num/10-a*10;
    d=num/10;
    c=num-d*10;
    p=a*a*a+b*b*b+c*c*c;
    if(p==num)
    printf("%d\n", num);}
    //printf("ist Digit=%d\n2nd Digit=%d\n3rd digit=%d\n",a,b,c);
    return(0);
}