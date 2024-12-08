// Armstrong values
//digits seperator.
#include<stdio.h>
int main(){
    int a, b, c, num,d;
    printf("Enter the number till you want\n");
    scanf("%d",&num);
    a=num/100;
    b=num/10-a*10;
    d=num/10;
    c=num-d*10;
    printf("ist Digit=%d\n2nd Digit=%d\n3rd digit=%d\n",a,b,c);

    return 0;
}